#include <iostream>
#include <iomanip>

using namespace std;

const int BOARD_SIZE = 3;

class TicTacToe {
private:
    char board[BOARD_SIZE][BOARD_SIZE];

public:
    TicTacToe() {
        // Initialize the board with empty spaces
        for (int i = 0; i < BOARD_SIZE; ++i) {
            for (int j = 0; j < BOARD_SIZE; ++j) {
                board[i][j] = ' ';
            }
        }
    }

    void printBoard() {
        cout << "  ";
        for (int i = 1; i <= BOARD_SIZE; ++i) {
            cout << setw(3) << i;
        }
        cout << endl;
        for (int i = 0; i < BOARD_SIZE; ++i) {
            cout << setw(2) << i + 1;
            for (int j = 0; j < BOARD_SIZE; ++j) {
                cout << setw(2) << board[i][j];
                if (j < BOARD_SIZE - 1)
                    cout << " |";
            }
            cout << endl;
            if (i < BOARD_SIZE - 1) {
                cout << "  ";
                for (int k = 0; k < BOARD_SIZE * 4 - 1; ++k)
                    cout << "-";
                cout << endl;
            }
        }
        cout << endl;
    }

    
};

int main() {
    TicTacToe game;
    char currentPlayer = 'X';

    cout << "Welcome to Tic Tac Toe!" << endl;

    
        game.printBoard();


    return 0;
}
