//C++ Program 
#include<iostream>
using namespace std;
char board[3][3];

// Function to get the winner
char getWinner() {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return board[i][0];
        }
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
            return board[0][j];
        }
    }
    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return board[0][2];
    }
    // If no winner, return space character
    return ' ';
}

int main()
{
    char winner = getWinner();
    if (winner != ' ') {
        cout << "Player " << winner << " wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

   return 0;    
}
