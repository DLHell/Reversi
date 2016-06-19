/*
Pseudecode for Reversi project:

Reversi is a 8x8 board game.

Two player game, so player 1 & 2.

So use an array? Board [8][8]; two dimensional?

| (0,0) | (1,0) | (2,0) | (3,0) | (4,0) | (5,0) | (6,0) | (7,0) |
| (0,1) | (1,1) | (2,1) | (3,1) | (4,1) | (5,1) | (6,1) | (7,1) |
| (0,2) | (1,2) | (2,2) | (3,2) | (4,2) | (5,2) | (6,2) | (7,2) |
| (0,3) | (1,3) | (2,3) | (3,3) | (4,3) | (5,3) | (6,3) | (7,3) |
| (0,4) | (1,4) | (2,4) | (3,4) | (4,4) | (5,4) | (6,4) | (7,4) |
| (0,5) | (1,5) | (2,5) | (3,5) | (4,5) | (5,5) | (6,5) | (7,5) |
| (0,6) | (1,6) | (2,6) | (3,6) | (4,6) | (5,6) | (6,6) | (7,6) |
| (0,7) | (1,7) | (2,7) | (3,7) | (4,7) | (5,7) | (6,7) | (7,7) |

Should I give the players the option to enter in their name or not?
(Perhaps later if the game is working?) (10-15 char limit)

(3,3) (4,3) (3,4) (4,4) will be filled with opposing colors already

Player 1: (x,y)
Player 2: (x,y)

Win conditions:
1) game ends when one player is out of their own pieces on the board
2) or the board is completely filled in which case the program counts who has more pieces.

If an array is used, don't let the players enter in false coordinates. aka no out of bounds
Ex. (-1,0) or (19,3)

So what classes are now needed?
Reversi game to run the game
Player, can use one class and have two player objects.

each player will have their choices (also, make sure they can't choose an already filled spot)
there will have to be a count for the win condition #2, but does it go in the player class or not?

the biggest possible problem may be checking the "flip"
since reversi is a game based on "flipping" the opponent's pieces to your color,
the game has to check for up/down/left/right coordination of your piece and the board.
can't let the player choose a spot that will not flip at least a piece.
if a player does not have a legal move, then the other player is able to go again. (presumably until the end or an option opens up)


Unlike other programs where the inputs and outputs scroll down in the console window, is it possible
to make the board stable and stay in one place (at the top) every time? //ask aaron about his blackjack clear thing

*/