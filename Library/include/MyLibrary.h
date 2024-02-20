#pragma once

#include <string>

namespace MyLibrary {
    class Entity {
    public:
        std::string Name;
        int Number;
    };

    void DoubleTheNumberValue( Entity& entity );

}