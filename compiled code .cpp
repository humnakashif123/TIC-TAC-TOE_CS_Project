#include <iostream>


using namespace std;
char board[3][3];
char currentPlayer;
char sign;

void initializeBoard() {
    // Initialize the board
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
    // Set initial player
    currentPlayer = 'X';
}
    
    void displayBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}



char Player1Sign(int playerNum) {
    cout << "Player 1" << ", choose your sign ('O' or 'X'): ";
    cin >> sign;

    
       while (sign != 'O' && sign != 'X') {
        cout << "Invalid input."<<endl; 
        cout<<"Please enter 'O' or 'X': ";
        cin >> sign;
    }
    return sign;
}
char Player2Sign(char sign1) {
	sign1 = sign;
    if (sign1 == 'O') {
    	cout<<"Player 1 -- O"<<endl;
    	cout<<"Player 2 -- X"<<endl;
        return 'X';
    } else {
    	cout<<"Player 1 -- X"<<endl;
    	cout<<"Player 2 -- O"<<endl;
        return 'O';
    }
}
void no_Of_Players()
{
	int players, playerNum;
	cout<<"1. Single Player \n2.Two Players"<<endl;
	cout<<"Enter your choice: ";
	cin>>players;
	if(players == 1 || players == 2)
	{
		playerNum = players;
		Player1Sign(playerNum);
		Player2Sign(sign);
	}
}



    int main(){
    	 
    	 
    	 cout << endl;
    cout << "\t\t\t| TIC |\t X  |  O  |" << endl;
    cout << "\t\t\t-------------------" << endl;
	cout << "\t\t\t|  X  |\tTAC |  X  |" << endl;
	cout << "\t\t\t-------------------" << endl;
	cout << "\t\t\t|  O  |\t X  | TOE |" << endl;
   
   	no_Of_Players();
  

    initializeBoard();
    displayBoard();
		
	}
