# Python Turtle Crossing Game Documentation 

## Introduction 
The Turtle Cross is a simple Python game implemented using the Turtle graphics library. The player controls a turtle that moves vertically, avoiding randomly moving cars. The goal is to cross the road and reach higher levels while avoiding collisions with cars.

*Participants will focus on understanding, testing, and potentially identifying any issues or improvements within the implementation of different classes.*

## Installation and Usage
1. Download all the files in this repository to your system.
2. Store the files in a suitable location. 
3. Install Python runtime environment. 
4. run the `main.py` file to play the game.

## Files
- `main.py`: The main script to run the Turtle Cross game.
- `cars.py`: Defines the `Cars` class, representing the cars in the Turtle Cross game. Cars move horizontally across the screen at varying speeds.
- `player.py`: Defines the `Player` class, representing the player-controlled turtle in the Turtle Cross game. The turtle moves vertically and advances to the next level upon reaching the top.
- `scoreboard.py`: Defines the `ScoreBoard`class for managing and displaying the player's level and game status in the Turtle Cross game.

## Cars Class Documentation 
### Functions
1. `__init__(self)`: Initializes a new car with a random color, shape, and starting position.
2. `increase_speed(self)`: Increases the horizontal speed of the car.
3. `move(self)`: Moves the car horizontally.

## Player Class Documentation 
### Functions 
1. `__init__(self)`: Initializes a new player turtle at the bottom of the screen.
2. `up(self)`: Moves the turtle upwards.
3. `next_level(self)`:  Resets the turtle to the starting position upon reaching the top.

## Scoreboard Class Documentation 
### Functions
1. `__init__(self)`: Initializes a new scoreboard.
2. `update_level(self)`: Increases the level and updates the displayed level.
3. `game_over(self)`: Displays a "Game Over" message on the screen.