#ifndef SIMULATION_OUTPUTSYSTEM_H
#define SIMULATION_OUTPUTSYSTEM_H

namespace Solution {
    struct OutputSystem final : ECS::System {

        ~OutputSystem() override {
            file.close();
        }

        void onAwake() override {}
        bool onUpdate() override;
    private:
        std::ofstream file{"work.out"};
    };
}
#endif  // SIMULATION_OUTPUTSYSTEM_H
