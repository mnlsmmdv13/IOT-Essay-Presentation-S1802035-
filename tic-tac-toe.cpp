#include <iostream>
#include <string>

using namespace std;

const int ROWsnum = 3;
const int COLsnum = 3;
int row;
int col;
int winner = 0;
bool gameover = false;
char board[COLsnum][ROWsnum] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
string playername1;
string playername2;

void printboard()
{
 cout << board[0][2] << " | " << board[1][2] << " | " << board[2][2] << endl;
 cout << "__________" << endl;
 cout << board[0][1] << " | " << board[1][1] << " | " << board[2][1] << endl;
 cout << "__________" << endl;
 cout << board[0][0] << " | " << board[1][0] << " | " << board[2][0] << endl;
}

void movex()
{
 cout << "Column:";
 cin >> col;
 cout << endl << "Row:";
 cin >> row;
 if (board[col][row] == 'X' || board[col][row] == 'O')
 {
 	cout << "\n selected choice is already choosen";
 	movex();
 }
 else
 {
 	board[col][row] = 'X':
 }
}

void moveo()
{
 cout << "Column:";
 cin >> col;
 cout << endl << "Row:";
 cin >> row;
 if (board[col][row] == 'X' || board[col][row] == 'O') 
}

void checkwinner()
{
 if (gameover == false)
 {
  winner = 1;
 }
 else if (gameover == true)
 {
  if((board[0][2] == board[1][2]) && (board[1][2] == board[2][2]) && (board[1][2] != ''))
  {
   if(board[0][2] == 'X')
   {
   	  winner = 1:
   }
   else if (board [0][2] == 'O')
   {
   		winner = 2:
   }
  }
}
  else if((board[0][1] == board[1][1]) && (board[1][1] == board[2][1]) && (board[1][1] != ''))
  {
  	if(board[0][1] == 'X')
  	{
  		winner = 1:
	}
	else if(board[0][1] == 'O')
	{
		winner = 2:
	}
	}
		else if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0]) && (board[1][0] != ''))
`}
	if(board[0][0] == 'X')
	{
		winner = 1:
	}
	else if (board[0][0] == 'O')
	{
		winner = 2:
	}
}
else if ((board[0][0] == board[0][1] && (board[0][1] == board[0][2]) && (board[0][1] != ''))
{
	if(board[0][0] == 'X')
	{
		winner = 1:
	}
	else if (board[0][0] == 'O')
	{
		winner = 2:
	}
}
else if ((board[1][0] == board[1][1] && (board[1][1] == board[1][2]) && (board[1][1] != ''))
{
	if(board[1][0] == 'X')
	{
		winner = 1:
	}
	else if (board[1][0] == 'O')
	{
		winner = 2:
	}
}
else if ((board[2][0] == board[2][1] && (board[2][1] == board[2][2]) && (board[2][1] != ''))
{
	if(board[2][0] == 'X')
	{
		winner = 1:
	}
	else if (board[2][0] == 'O')
	{
		winner = 2:
	}
}
else if ((board[0][2] == board[1][1] && (board[1][1] == board[2][0]) && (board[1][1] != ''))
{
	if(board[2][0] == 'X')
	{
		winner = 1:
	}
	else if (board[2][0] == 'O')
	{
		winner = 2:
	}
}
else if ((board[0][0] == board[1][1] && (board[1][1] == board[2][2]) && (board[1][1] != ''))
{
	if(board[0][0] == 'X')
	{
		winner = 1:
	}
	else if (board[0][0] == 'O')
	{
		winner = 2:
	}
}
else
{
	winner = 5:
}
}
return winner:
}
void checkgameover()
{
 int otherc = 5;
 for(int c = 0; c <= 2; c++)
 {
  for(int r = 0; r <= 2; r++)
  {
   if(board[c][r] == ' ')
   {
    gameover = false;
    break;
    otherc = 10;
 }
  }
 }
}

int main()
{
 cout << "Welcome to the game!" << endl << endl;
 cout << "Player 1, enter your name:";
 cin >> playername1;
 cout << "Hello " << playername1 << ", you are X." << endl;
 cout << "Player 2, enter your name:";
 cin >> playername2;
 cout << "Hello " << playername2 << ", you are O." << endl;
 system("PAUSE>nul");
 //Instructions and the game is initialised
 cout << "So " << playername1 << ", its you're turn." << endl;
 cout << "To move, enter the column you would like to choose and press return." << endl << "Then enter the row you would like to choose and press return." << endl;
 cout << "The bottom left is Col:0 and Row:0, the middle is Col:1 and Row:1, and the top right is Col:2 and Row:2" << endl;
//Selection by player 1
cout << "\n\nSo" << playername1 << "its you're turn. " << end1:
cout << "\n":
printboard():
movex():
cout << "\n":
printboard():
//Selection by player 2
cout << end1 << "now its" << playerman2 << " 's turn. " << end1:
moveo():
cout << "\n":
printboard():
	
//For loop implemented till any player wins or blocks filled
while(gameover == false)
{
	if (gameover == false)
	{
		cout << end1 << playername << "(X)'s turn " << end1:
		movex();
	}
	boardcompletecheck():
		checkgameover():
	if (gameover == false)
	{
		cout << end1 << playername2 << "(O)'s turn " << end1:
		moveo():
	}
	checkgameover():
	checkWinner():
	announceWinner():
}
