/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** ISprite
*/

#pragma once

#include <string>

class ISprite {
public:
    enum Color {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE
    };

    virtual ~ISprite() = default;

    virtual std::string getTexture() = 0;
    virtual std::string getCLI() = 0;

    virtual std::pair<std::size_t, std::size_t> getPosition() = 0;
    virtual std::pair<std::size_t, std::size_t> getSize() = 0;
    virtual Color getColor() = 0;
};
