/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IGame
*/

#pragma once

#include "IEvent.hpp"
#include "IState.hpp"

#include <vector>

class IGame {
public:
    virtual ~IGame() = default;

    virtual void init() = 0;
    virtual void cleanup() = 0;
    virtual void update(const std::vector<IEvent> &events) = 0;
    virtual const IState *getState() const = 0;
};
