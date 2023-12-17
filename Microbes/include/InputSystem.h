#ifndef SIMULATION_INPUTSYSTEM_H
#define SIMULATION_INPUTSYSTEM_H

namespace Solution {
    struct InputSystem final : ECS::System {
        void onAwake() override;
        bool onUpdate() override {
            return true;
        }
    private:
        static std::uint32_t read(std::string& number);
    };
} // namespace Solution
#endif  // SIMULATION_INPUTSYSTEM_H
