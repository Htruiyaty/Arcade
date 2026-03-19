# Arcade project documentation

## Goal

The goal of this project is to create a program simulating an arcade machine. It will be devided in three parts:
- The [***Core***](Core.md) : It is responsible for the main loop, management of the two other parts and the communication between them.
- The [***Displays***](IDisplay.md) : Those are responsible for the display of the game, and user input.
- The [***Games***](IGame.md) : Those are responsible for treating user input, and game logic.

## Architecture

[***Games***](IGame.md) and [***Displays***](IDisplay.md) will be implemented as shared libraries. They should be loaded at runtime by the [***Core***](Core.md), which will be able to switch between them.

This is a representation of the communication between the three parts:

```
                    Core
+-----------------+   |   +-----------------+
|                 ----|--->                 |
|     Displays    |   |   |      Games      |
|                 <---|----                 |
+-----------------+   |   +-----------------+
```

## Interfaces

The only way for those parts to communicate is through regulated typed data. This is done through the use of ***interfaces*** of two types:

- [***IEvent***](IEvent.md) : This interface will represent all events the [***Displays***](IDisplay.md) may send to the [***Games***](IGame.md). It will be used to represent user input, but also other events such as a window close event.
- [***IState***](IState.md) : This interface will represent the current state of the game. It will be used by the [***Displays***](IDisplay.md) to display the game.

```
                    Core
+-----------------+   |    +-----------------+
|                 --IEvent->                 |
|     Displays    |   |    |      Games      |
|                 <-IState--                 |
+-----------------+   |    +-----------------+
```
