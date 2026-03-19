## Games documentation

### List of games

- [***Snake***](Snake.md)
- [***MineSweeper***](MineSweeper.md)
- [***Nibbler***](Nibbler.md)
- [***Pacman***](Pacman.md)
- [***Qix***](Qix.md)
- [***Centipede***](Centipede.md)
- [***SolarFox***](SolarFox.md)

### Communication

A ***Game*** will get all the data it needs from the [***Display***](IDisplay.md) through the [***IEvent***](IEvent.md) interface. It will then use this data to update the game state and logic.

It will then be able to generate a new [***IState***](IState.md) to be send back to the ***Display*** for rendering.

### Code

```cpp
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
```
