#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int BOARD_SIZE = 9;

// Function to draw the Tic Tac Toe board
void drawBoard(char board[]) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check if a player has won
bool checkWin(const char board[], char mark) {
    // Check rows, columns, and diagonals
    return ((board[0] == mark && board[1] == mark && board[2] == mark) ||
            (board[3] == mark && board[4] == mark && board[5] == mark) ||
            (board[6] == mark && board[7] == mark && board[8] == mark) ||
            (board[0] == mark && board[3] == mark && board[6] == mark) ||
            (board[1] == mark && board[4] == mark && board[7] == mark) ||
            (board[2] == mark && board[5] == mark && board[8] == mark) ||
            (board[0] == mark && board[4] == mark && board[8] == mark) ||
            (board[2] == mark && board[4] == mark && board[6] == mark));
}

// Function to get a valid move from the player
int getPlayerMove(const char board[]) {
    int move;
    while (true) {
        cout << "Enter your move (1-9): ";
        cin >> move;
        move--; // Adjust for zero-based index
        if (move >= 0 && move < BOARD_SIZE && board[move] == ' ')
            return move;
        cout << "Invalid move. Please try again." << endl;
    }
}

// Function for the computer's move (random placement)
int getComputerMove(const char board[]) {
    int move;
    do {
        move = rand() % BOARD_SIZE; // Generate random move (0-8)
    } while (board[move] != ' '); // Repeat until an empty spot is found
    return move;
}

int main() {
    srand(time(0)); // Seed the random number generator

    char board[BOARD_SIZE] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // Initialize empty board
    bool playerTurn = true; // Player starts first

    cout << "Welcome to Tic Tac Toe!" << endl;
    drawBoard(board);

    while (true) {
        if (playerTurn) {
            // Player's turn
            int move = getPlayerMove(board);
            board[move] = 'X';

            if (checkWin(board, 'X')) {
                cout << "Congratulations! You win!" << endl;
                break;
            }
        } else {
            // Computer's turn
            int move = getComputerMove(board);
            board[move] = 'O';

            cout << "Computer's move:" << endl;
            drawBoard(board);

            if (checkWin(board, 'O')) {
                cout << "Computer wins! Better luck next time." << endl;
                break;
            }
        }

        // Switch turns
        playerTurn = !playerTurn;
        drawBoard(board);

        // Check for a tie
        bool isTie = true;
        for (int i = 0; i < BOARD_SIZE; ++i) {
            if (board[i] == ' ') {
                isTie = false;
                break;
            }
        }
        if (isTie) {
            cout << "It's a tie!" << endl;
            break;
        }
    }

    return 0;
}
