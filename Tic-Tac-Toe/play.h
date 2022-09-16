#include "get_choice.h"
#include "win.h"
#include "board.h"

void play()
{
    for(i=1;i<10;i++)
            board[i]=" ";
    system("CLS");
    turn=1;
    print_board();
    while(turn<=9)
    {
        cout<<endl<<"\nGive the position: ";
        get_choice(turn);
        system("CLS");
        print_board();
        if(turn>4)      //we get winner only after 5 moves
        {
            is_win();
        }
        //cout<<endl;
        turn++;
    }
}