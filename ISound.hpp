/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** ISound
*/

#pragma once

#include <string>

class ISound {
public:
    virtual ~ISound() = default;

    virtual std::string getSound() = 0;
    virtual std::size_t getVolume() = 0;
    virtual bool isLooping() = 0;
};
