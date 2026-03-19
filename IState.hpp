/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IState
*/

#pragma once

#include "ISprite.hpp"
#include "IText.hpp"
#include "ISound.hpp"

class IState {
public:
    virtual ~IState() = default;

    virtual std::vector<ISprite> getSprites() const = 0;
    virtual std::vector<IText> getTexts() const = 0;
    virtual std::vector<ISound> getSounds() const = 0;
};
