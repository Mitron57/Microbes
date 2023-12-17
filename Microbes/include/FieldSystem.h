#ifndef SIMULATION_FIELDSYSTEM_H
#define SIMULATION_FIELDSYSTEM_H

namespace Solution {
    struct FieldSystem final : ECS::System {
        void onAwake() override;
        bool onUpdate() override {
            return true;
        }
    };
} // namespace Solution
#endif  // SIMULATION_FIELDSYSTEM_H
