#include<iostream>
using namespace std;
void game()
{
	cout<<"Start"<<endl;
}
void play_Again()
{
	char playAgain;
	do
	{
		game();
		cout<<"Enter 'y' to play again."<<endl;
		cin>>playAgain;
		
	}while(playAgain=='y');
}
int main()
{
	play_Again();
	return 0;
}
