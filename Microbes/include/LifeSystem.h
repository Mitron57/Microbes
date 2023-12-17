#ifndef SIMULATION_LIFESYSTEM_H
#define SIMULATION_LIFESYSTEM_H

namespace Solution {
    struct LifeSystem final : ECS::System {
        void onAwake() override {}
        bool onUpdate() override;
    };
} // namespace Solution

#endif  // SIMULATION_LIFESYSTEM_H
