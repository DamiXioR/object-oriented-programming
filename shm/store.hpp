#pragma once

#include "cargo.hpp"
#include "player.hpp"

class Store {
private:
    std::vector<std::shared_ptr<Cargo>> cargo_;

public:
    enum class Response { done, lack_of_money, lack_of_cargo, lack_of_space };

    Store();
    // Response buy(const Cargo* cargo, size_t amount, Player* player);
    Response buy(std::shared_ptr<Cargo> cargo, size_t amount, Player* player);
    Response sell(Cargo* cargo, size_t amount, Player* player);

    Cargo* getCargo(uint32_t index) const;
};
