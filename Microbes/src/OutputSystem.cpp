namespace Solution {
    bool OutputSystem::onUpdate() {
        using namespace ECS;
        const std::shared_ptr fieldEntity{Filter<Field>::filter()[0]};
        const auto [fieldComponent]{
            Manager::getComponents<Field>(fieldEntity)
        };
        file << "Current generation: " << currentGeneration << std::endl;
        file << "Field: " << std::endl;
        std::cout << "Current generation: " << currentGeneration <<
            std::endl;
        std::cout << "Field: " << std::endl;
        for (const auto& line : fieldComponent->current) {
            for (const auto age : line) {
                std::string elem{age == 0 ? "." : std::to_string(age)};
                file << std::setw(3) << elem;
                std::cout << std::setw(3) << elem;
            }
            file << std::endl;
            std::cout << std::endl;
        }
        file << std::endl;
        std::cout << std::endl;
        return true;
    }
}
