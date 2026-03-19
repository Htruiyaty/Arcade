## IText documentation

### Code

```cpp
/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IText
*/

#pragma once

#include <string>

class IText {
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

    virtual ~IText() = default;

    virtual std::string getText() = 0;

    virtual std::pair<std::size_t, std::size_t> getPosition() = 0;
    virtual std::size_t getSize() = 0;
    virtual Color getColor() = 0;
};
```
