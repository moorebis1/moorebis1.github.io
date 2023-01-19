#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int status();
void game();

int main()
{
    int player = 1,i,choice;

    char xo;
    do
    {
        game();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        xo = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = xo;
        else if (choice == 2 && square[2] == '2')

            square[2] = xo;
        else if (choice == 3 && square[3] == '3')

            square[3] = xo;
        else if (choice == 4 && square[4] == '4')

            square[4] = xo;
        else if (choice == 5 && square[5] == '5')

            square[5] = xo;
        else if (choice == 6 && square[6] == '6')

            square[6] = xo;
        else if (choice == 7 && square[7] == '7')

            square[7] = xo;
        else if (choice == 8 && square[8] == '8')

            square[8] = xo;
        else if (choice == 9 && square[9] == '9')

            square[9] = xo;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=status(); //after every move 'i' occurs and the int status() protocol is started

        player++;
    }while(i==-1);
    game();
    if(i==1)

        cout<<"==>\a Congratulations! Player "<<--player<<" wins! ";
    else
        cout<<"==>\aGame Draw!";

    cin.ignore();
    cin.get();
    return 0;
}


int status()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1; // if return of 1 occurs, there has been a winner, game stops
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
             && square[4] != '4' && square[5] != '5' && square[6] != '6'
             && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0; //if return is 0, all squares have been filled with no winner i.e. draw occurs
    else
        return -1; // if there is no winner, return = -1 to cause the game to loop
}





void game() //creates the game board using cout (character out) commands
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

