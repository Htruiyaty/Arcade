/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IEvent
*/

#pragma once

#include <cstddef>

class IEvent {
public:
    enum EventType {
        NONE,
        KEY,
        MOUSE,
        EXIT,
        DISPLAY,
        GAME
    };

    enum KeyCode {
        KEYCODE_UNKNOWN,
        KEYCODE_UP,
        KEYCODE_DOWN,
        KEYCODE_LEFT,
        KEYCODE_RIGHT,
        KEYCODE_ENTER,
        KEYCODE_ESCAPE,
        KEYCODE_SPACE,
    };

    enum MouseButton {
        MOUSE_BUTTON_LEFT,
        MOUSE_BUTTON_RIGHT,
        MOUSE_BUTTON_MIDDLE
    };

    virtual ~IEvent() = default;

    virtual EventType getType() const = 0;
    virtual KeyCode getKey() const = 0;
    virtual MouseButton getMouse() const = 0;

private:
    std::size_t _x;
    std::size_t _y;
};
