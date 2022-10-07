void is_win()
{
    int cnt=0;

    //Horizontal check
    if(c==1||c==2||c==3)
        i=1;
    else if(c==4||c==5||c==6)
        i=4;
    else if(c==7||c==8||c==9)
        i=7;

    if(board[i]!=" ")
    {
        if(board[i]==board[i+1] && board[i]==board[i+2])
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner";
            turn=9;
            return;
        }
    }

    //Vertical check
    if(c==1||c==4||c==7)
        i=1;
    else if(c==2||c==5||c==8)
        i=2;
    else if(c==3||c==6||c==9)
        i=3;
    cnt=0;

    if(board[i]!=" ")
    {
        if(board[i]==board[i+3] && board[i]==board[i+6])
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner";
            turn=9;
            return;
        }
    }

    //1st Diagonal check
    if(c==1||c==5||c==9)
    {
        i=1;
        if(board[i]!=" ")
        {
            if(board[i]==board[5] && board[i]==board[9])
            {
                cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner";
                turn=9;
                return;
            }
        }
    }

    //2nd Diagonal check
    if(c==3||c==5||c==7)
    {
        i=3;
        if(board[i]!=" ")
        {
            if(board[i]==board[5] && board[i]==board[7])
            {
                cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner";
                turn=9;
                return;
            }
        }
    }
}