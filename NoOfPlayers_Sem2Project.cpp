#include<iostream>
using namespace std;
char sign;
//The commented out code is hadi's code with some minor changes, I needed to use it to work on my part of the code
/*char Player1Sign(int playerNum) {
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
}*/
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
int main()
{
	no_Of_Players();
	return 0;
}
