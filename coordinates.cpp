//C++ Program 
#include <iostream>
using namespace std;



int main() {
    // declaring a 2D array
    char arr[3][3];

    // using for loop to take input
    for (int turn = 0; turn <9; turn++) {
        cout << "Enter coordinates for Player " << (turn % 2 + 1) << " (row and column): ";
        int row, col;
        cin >> row >> col;

        //using if condition to check whether the coordinates are correct
        if (row < 0 || row >= 3 || col < 0 || col >= 3)
         {
            cout << "Invalid coordinates Coordinates must be within range 0 to 2" << endl;
            --turn; 
            
         }

        // storing the input in the array
         if (turn % 2 == 0) {
            arr[row][col] = 'X';
        } else {
            arr[row][col] = 'O';
        }
    }

    // displaying  the array
    cout << "The array is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
         {
            cout << arr[i][j] << " ";
         }
        cout << endl;
    }

    return 0;
}
