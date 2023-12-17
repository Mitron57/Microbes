#ifndef SIMULATION_SOLUTION_H
#define SIMULATION_SOLUTION_H

#include <iostream>
#include <algorithm>
#include <fstream>
#include <random>
#include <ECS.h>

#include <Components.h>
namespace Solution {
    template <typename F>
    std::uint32_t countNear(const F& field, std::int32_t x, std::int32_t y) {
        std::size_t count{};
        for (std::int32_t i = y - 1; i < y + 2; ++i) {
            for (std::int32_t j = x - 1; j < x + 2; ++j) {
                if (0 <= i && i < fieldSize && 0 <= j && j < fieldSize &&
                    field[i][j] != 0) {
                    ++count;
                    }
            }
        }
        return field[y][x] != 0 ? count - 1 : count;
    }
}

#include <FieldSystem.h>
#include <FieldSystem.cpp>
#include <InputSystem.h>
#include <InputSystem.cpp>
#include <LifeSystem.h>
#include <LifeSystem.cpp>
#include <OutputSystem.h>
#include <OutputSystem.cpp>

namespace Solution {
    inline void prepareForRun() {
        using namespace ECS;
        const auto field = Manager::createEntity();
        Manager::addComponent<Field>(field);
        Manager::addSystem<InputSystem>();
        Manager::addSystem<FieldSystem>();
        Manager::addSystem<OutputSystem>();
        Manager::addSystem<LifeSystem>();
    }
}

#endif  // SIMULATION_SOLUTION_H
