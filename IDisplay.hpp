/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IDisplay
*/

#pragma once

#include "IEvent.hpp"
#include "IState.hpp"

#include <memory>

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual void init() = 0;
    virtual void cleanup() = 0;
    virtual void update(const IState &state) = 0;
    virtual std::vector<std::shared_ptr<IEvent>> getEvents() = 0;
};
