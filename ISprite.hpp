/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** ISprite
*/

#pragma once

#include "Color.hpp"

#include <string>

class ISprite {
public:
    virtual ~ISprite() = default;

    virtual std::string getTexture() const = 0;
    virtual std::string getCLI() const = 0;

    virtual std::pair<std::size_t, std::size_t> getPosition() const = 0;
    virtual std::pair<std::size_t, std::size_t> getSize() const = 0;
    virtual std::pair<Color, Color> getColor() const = 0;
};
