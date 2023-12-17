#ifndef SIMULATION_COMPONENTS_H
#define SIMULATION_COMPONENTS_H

namespace Solution {
    static std::uint32_t maxGeneration{}, fieldSize{};
    static std::uint8_t lettersCount{};
    static std::uint32_t currentGeneration{1};

    struct Health final : ECS::Component {
        std::uint32_t age = 1;
    };

    struct Field final : ECS::Component {
        std::vector<std::vector<std::uint32_t>> current{}, future{};
    };

    struct Position final : ECS::Component {
        std::uint32_t posX{};
        std::uint32_t posY{};
    };
}
#endif  // SIMULATION_COMPONENTS_H
