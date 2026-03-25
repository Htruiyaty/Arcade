/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IText
*/

#pragma once

#include "Color.hpp"

#include <string>

class IText {
public:
    virtual ~IText() = default;

    virtual std::string getText() const = 0;

    virtual std::pair<std::size_t, std::size_t> getPosition() const = 0;
    virtual std::size_t getSize() const = 0;
    virtual std::pair<Color, Color> getColor() const = 0;
};
