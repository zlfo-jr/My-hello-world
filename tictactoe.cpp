#include <iostream>
using namespace std;

void displayboard(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " " ;
        }
        cout << endl;
    }
}


int main()
{   
    int total = 0;
    int row, col;
    char board[3][3] = {{'-','-','-'}, {'-','-','-'}, {'-','-','-'}};
    while(total < 9)
   { 
    displayboard(board);

    char current_player;
    if(total % 2 ==0)
    {
        current_player = 'X';
    }else if(total % 2 != 0 )
    {
        current_player = 'O';
    }

    cout << "player " << current_player << " move" << endl;
    cin >> row >> col;

    if(row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '-')
    {
        board[row][col] = current_player;
        total++;
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != '-')
        {
            cout << "player " << current_player << " won!!" << endl;
            break;
        }
        else if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != '-')
        {
            cout << "player " << current_player << " won!!" << endl;
            break;
        }  else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')
        {
            cout << "player " << current_player << " won!!" << endl;
            break;
        } else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')
        {
            cout << "player " << current_player << " won!!" << endl;
            break;
        }
        
    }

    else
    {
        cout << "wrong move!! it's either taken or wrong spot " << endl;
    }
    
        
       }
       displayboard(board);
       
    if(total ==9)
    {
            cout << "try again :)" << endl;

    }else
    {
        cout << "congratulations to the winner!!";
    }
    
     return 0;
}