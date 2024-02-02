#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void display_grid();
char player_move();
char computer_move();
void announcing_winner(char player, char computer);

int main()
{
    cout << "--------welcome to R P S--------" << endl;
    display_grid();
    announcing_winner(player_move(), computer_move());

    return 0;
}

void display_grid()
{
    cout << "***********************" << endl
         << "press r ------> rock " << endl
         << "press p ------> paper" << endl
         << "press s ------> scissor" << endl
         << "***********************" << endl
         << endl;
}
char player_move()
{
    char move;
    char r, p, s;
    cout << "Enter your move : " << endl;
    cin >> move;
    if ((move == 'r') || (move == 's') || (move == 'p'))
    {
        return move;
    }
    else
    {
        system("clear");
        cout << "--------wrong move------- " << endl
             << "     please try again" << endl;
        display_grid();
        return player_move();
    }
}
char computer_move()
{
    char r, p, s;
    srand(time(0));
    if ((rand() % 3) == 0)
    {
        return 'r';
    }
    else if ((rand() % 3) == 1)
    {
        return 'p';
    }
    else
        return 's';
}
void announcing_winner(char player, char computer)
{
    cout << "your move : " << player << "   computer move : " << computer << endl;
    char r, p, s;
    if (player == computer)
    {
        cout << "------Match draw-------" << endl;
    }
    else if ((player == 'r') && (computer == 's'))
    {
        cout << "you win! rock smash the scissor. " << endl;
    }
    else if ((player == 's') && (computer == 'p'))
    {
        cout << "you win! scissor cuts the paper. " << endl;
    }
    else if ((player == 'p') && (computer == 'r'))
    {
        cout << "you win! paper wraps the rock. " << endl;
    }
    else if ((computer == 'r') && (player == 's'))
    {
        cout << "computer win! rock smash the scissor. " << endl;
    }
    else if ((computer == 's') && (player == 'p'))
    {
        cout << "computer win! scissor cuts the paper. " << endl;
    }
    else if ((computer == 'p') && (player == 'r'))
    {
        cout << "computer win! paper wraps the rock. " << endl;
    }
}
