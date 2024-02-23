# Python Snake Game Documentation 

## Introduction 
The provided Python code implements a simple Snake game using the Turtle graphics library. The game features a snake that the player controls to eat food and grow longer. The snake moves in discrete segments, and its direction can be changed by the player.The player's score is displayed, and the game ends if the snake collides with the wall or itself.
*Participants will focus on understanding, testing, and potentially identifying any issues or improvements within the implementation of different classes.*

## Installation and Usage
1. Download all the files in this repository to your system.
2. Store the files in a suitable location. 
3. Install Python runtime environment. 
4. run the `main.py` file to play the game.

## Files
- `main.py`: The main script to run the Snake game.
- `snake.py`: Defines the `Snake` class for managing the snake's behaviour. 
- `food.py`: Defines the `Food` class for handling the appearance and position of food items. 
- `scoreboard.py`: Defines the `ScoreBoard`class for managing and displaying the player's score.

## Snake Class Documentation 
### Functions 
1. `__init__(self)`: Initializes a new instance of the snake class and sets the head of the snake.
2. `create_snake(self)`: Creates the initial segments of the snake.
3. `add_segment(self, position)`: Adds a new segment to the snake.
4. `extend(self)`: Extends the snake by adding a new segment at the current last segment's position. 
5. `move(self)`: Moves the snake forward by one step. 
6. `up(self)`: Changes the snake's direction to up if it's not currently moving down. 
7. `down(self)`: Changes the snake's direction to down if it's not currently moving up.
8. `left(self)`: Changes the snake's direction to left if it's not currently moving right.
9. `right(self)`: Changes the snake's direction to right if it's not currently moving left.

## Food Class Documentation
### Functions
1. `__init__(self)`: Initializes a new instance of the Food class.
2. `refresh(self)`: Moves the food to a random position on the screen.

## ScoreBoard Class Documentation
### Functions 
1. `__init__(self)`: Initializes a new instance of the ScoreBoard class.
2. `update_scoreboard(self)`: Clears and updates the scoreboard display with the current score.
3. `increase_score(self)`: Increments the score by 1 and updates the scoreboard.
4. `game_over(self)`: Displays "GAME OVER" at the center of the screen.