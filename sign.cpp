#include <iostream>
using namespace std;


char Player1Sign(int playerNum) {
    char sign;
    cout << "Player " << playerNum << ", choose your sign ('O' or 'X'): ";
    cin >> sign;

    
       while (sign != 'O' && sign != 'X') {
        cout << "Invalid input."<<endl; 
        cout<<"Please enter 'O' or 'X': ";
        cin >> sign;
    }
    return sign;
}


char Player2Sign(char sign) {
    if (sign == 'O') {
        return 'X';
    } else {
        return 'O';
    }
}

int main() {
    char player1_sign, player2_sign;
    
    
    player1_sign = Player1Sign(1);
    player2_sign = Player2Sign(player1_sign);

    cout << "Player 1 has chosen: " << player1_sign << endl;
    cout << "Player 2 will have: " << player2_sign << endl;

    return 0;
}

