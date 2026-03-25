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

#include <memory>
#include <vector>

class IState {
public:
    virtual ~IState() = default;

    virtual const std::vector<std::shared_ptr<const ISprite>> &getSprites() const = 0;
    virtual const std::vector<std::shared_ptr<const IText>> &getTexts() const = 0;
    virtual const std::vector<std::shared_ptr<const ISound>> &getSounds() const = 0;
};
