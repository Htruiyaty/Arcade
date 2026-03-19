## IState documentation

### Storage

The ***IState*** interface is used to store the current state of the game, it stores all the data to be displayed on the screen.
Those can be of two main types:
- ***IText***: a string of characters to be displayed on the screen.
- ***ISprite***: a 2D image to be displayed on the screen.

### Code

```cpp
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
```
