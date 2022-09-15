#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;


vector<string> b(10," ");
int turn=1,p,i,c;

void print_board()
{
    for(int i=1;i<=9;i++)
    {
        if(i==1||i==4||i==7)
            cout<<"\t\t\t";
        cout<<b[i];
        if(i%3)
            cout<<"|";
        else
        {
            if(i==9)
                continue;
            cout<<endl;
            cout<<"\t\t       -------\n";
        }
    }
}

void get_choice(int turn)
{
    cin>>c;
    if(c>9 || c<1){
        cout<<"Enter a value between 1 to 9\n";
        get_choice(turn);
    }
        
    else if(b[c]==" ")
    {
        if(turn%2)
            b[c]="x";
        else
            b[c]="o";
    }
    else
    {
        cout<<"This position is already taken. Enter a valid one.\n";
        get_choice(turn);
    }
}

void is_win()
{
    switch (c)
    {
    case 1:
        if((b[1]==b[2]&&b[2]==b[3])||(b[1]==b[4]&&b[4]==b[7])||(b[1]==b[5]&&b[5]==b[9]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;
    
    case 2:
        if((b[1]==b[2]&&b[2]==b[3])||(b[2]==b[5]&&b[5]==b[8]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 3:
        if((b[1]==b[2]&&b[2]==b[3])||(b[3]==b[6]&&b[6]==b[9])||(b[3]==b[5]&&b[5]==b[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 4:
        if((b[4]==b[5]&&b[5]==b[6])||(b[1]==b[4]&&b[4]==b[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 5:
        if((b[1]==b[5]&&b[5]==b[9])||(b[4]==b[5]&&b[5]==b[6])||(b[2]==b[5]&&b[5]==b[8])||(b[3]==b[5]&&b[5]==b[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 6:
        if((b[4]==b[5]&&b[5]==b[6])||(b[3]==b[6]&&b[6]==b[9]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 7:
        if((b[7]==b[8]&&b[8]==b[9])||(b[1]==b[4]&&b[4]==b[7])||(b[3]==b[5]&&b[5]==b[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 8:
        if((b[7]==b[8]&&b[8]==b[9])||(b[8]==b[5]&&b[5]==b[2]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 9:
        if((b[7]==b[8]&&b[8]==b[9])||(b[1]==b[5]&&b[5]==b[9])||(b[9]==b[6]&&b[6]==b[3]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;
    }
}

void play()
{
    for(i=1;i<10;i++)
            b[i]=" ";
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
        cout<<endl;
        turn++;
    }
}



int main()
{
    do
    {
        play();
        cout<<"If you want to play again press 1;\neither press 0\n\n";
        cin>>p;
    }
    while(p);
    
    cout<<"Thanks for playing\n";
    sleep(3);       //waits 3 seconds
    return 0;
}