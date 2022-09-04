#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;


vector<string> b(10," ");

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
    int c;
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

int main()
{
    int turn=1,p,i;
    //print_board();

    do
    {
        for(i=1;i<10;i++)
            b[i]=" ";
        system("CLS");
        turn=1;
        print_board();
        while(turn<=9)
        {
            cout<<endl<<"Give the position: ";
            get_choice(turn);
            system("CLS");
            print_board();
            cout<<endl;
            //sleep(2);
            turn++;
        }
        
        cout<<"If you want to play again press 1;\neither press 0";
        cin>>p;
    }
    while(p);
    
    cout<<"Thanks for playing\n";
    sleep(3);
    return 0;
}