## Displays documentation

### List of displays

- [***NDK++***](NDK++.md)
- [***aa-lib***](aa-lib.md)
- [***libcaca***](libcaca.md)
- [***Allegro5***](Allegro5.md)
- [***Xlib***](Xlib.md)
- [***GTK+***](GTK+.md)
- [***SFML***](SFML.md)
- [***Irrlicht***](Irrlicht.md)
- [***OpenGL***](OpenGL.md)
- [***Vulkan***](Vulkan.md)
- [***Qt5***](Qt5.md)

### Communication

A ***Display*** will get all the data it needs to display from the [***Game***](IGame.md) through the [***IState***](IState.md) interface. It will then use this data to render the game on the display.

It will also be able to send back user input data to the ***Game*** through the [***IEvent***](IEvent.md) interface, allowing the game to update its state and logic accordingly.

### Code

```cpp
/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IDisplay
*/

#pragma once

#include "IEvent.hpp"
#include "IState.hpp"

class IDisplay {
public:
    virtual ~IDisplay() = default;

    virtual void init() = 0;
    virtual void cleanup() = 0;
    virtual void update(const IState &state) = 0;
    virtual std::vector<IEvent> getEvents() = 0;
};
```
