/*
** EPITECH PROJECT, 2026
** ARCADE
** File description:
** IEvent
*/

#pragma once

class IEvent {
public:
    enum EventType {
        NONE,
        KEY,
        MOUSE,
        EXIT,
        DISPLAY_NEXT,
        DISPLAY_PREV,
        GAME_NEXT,
        GAME_PREV,
    };

    enum KeyCode {
        KEY_UNKNOWN,
        KEY_UP,
        KEY_DOWN,
        KEY_LEFT,
        KEY_RIGHT,
        KEY_ENTER,
        KEY_ESCAPE,
        KEY_SPACE,
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
    virtual std::pair<std::size_t, std::size_t> getPosition() const = 0;
};
