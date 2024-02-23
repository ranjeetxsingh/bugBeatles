# Python Pong Game Documentation 

## Introduction 
This Python code implements a simple pong game using the Turtle graphics library. It involves two paddles and a ball, with players controlling the paddles to bounce the ball back and forth. The objective is to score points by hitting the ball past the opponent's paddle. 

*Participants will focus on understanding, testing, and potentially identifying any issues or improvements within the implementation of different classes.*

## Installation and Usage
1. Download all the files in this repository to your system.
2. Store the files in a suitable location. 
3. Install Python runtime environment. 
4. run the `main.py` file to play the game.

## Files
- `main.py`: The main script to run the Pong game.
- `paddle.py`: Defines the `Paddle` class, representing the paddles used by players in the Pong game, with methods for movement.
- `ball.py`: Defines the `Ball` class, representing the ball in the Pong game, with methods for movement and bouncing. 
- `scoreboard.py`: Defines the `ScoreBoard`class for managing and displaying the scores for the left and right players in the game.

## Ball Class Documentation 
### Functions

1. `__init__(self)`: Initializes a new instance of the `Ball` class with default settings.
2. `move(self)`: Moves the ball by updating its coordinates based on the current movement speed.
3. `bounce_y(self)`: Changes the vertical direction of the ball when it hits a boundary.
4. `bounce_x(self)`: Changes the horizontal direction of the ball and adjusts its speed when it hits a boundary.
5. `reset_position(self)`: Resets the ball to its initial position with default speed and bounces it horizontally.

## Paddle Class Documentation 
### Functions 
1. `__init__(self, position)`: Initializes a new paddle instance at the specified position with a square shape, white color, and adjustable size.
2. `up(self)`: Moves the paddle upward within defined boundaries.
3. `down(self)`: Moves the paddle downward within defined boundaries.

## Scoreboard Class Documentation 

### Functions 
1. `__init__(self)`: Initializes the `Scoreboard` with a white color, hides the turtle icon, and sets initial scores to 0.
2. `update_scoreboard(self)`: Clears and updates the scoreboard display with the current left and right player scores.
3. `l_point(self)`: Increments the left player's score by 1 and updates the scoreboard.
4. `r_point(self)`: Increments the right player's score by 1 and updates the scoreboard.
