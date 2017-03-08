// Header ==> Function Declarations

#include <iostream>
#include <string>
#include <cstdlib> // rng
#include <time.h> // time
#include <vector>
#include <algorithm>

using namespace std;

#ifndef AI_H
#define AI_H

class Ai
{
    private:
        int currentPlayer;
        int difficulty; // 0: easy 1: medium 2: hard

    public:
        // Default Constructor
        Ai();

        // Overload Constructor
        Ai(int, int);
            // current player (1: X, 2: 0), difficulty (1-3)

        // Destructor
        ~Ai();

        // Accessor Functions
        void printConfig() const;
            // prints config, debug command

        bool isValidMove(const int board[3][3], int inputMoveX, int inputMoveY);

        bool isBoardEmpty(const int board[3][3]);

        void playMove(int board[3][3], int player, int inputMoveX, int inputMoveY);
            // plays move on the board

        bool playFirstMove(int board[3][3], int currentPlayer);
            // plays if playing first move, if board is empty



};

#endif // AI_H
