void is_win()
{
    switch (c)
    {
    case 1:
        if((board[1]==board[2]&&board[2]==board[3])||(board[1]==board[4]&&board[4]==board[7])||(board[1]==board[5]&&board[5]==board[9]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;
    
    case 2:
        if((board[1]==board[2]&&board[2]==board[3])||(board[2]==board[5]&&board[5]==board[8]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 3:
        if((board[1]==board[2]&&board[2]==board[3])||(board[3]==board[6]&&board[6]==board[9])||(board[3]==board[5]&&board[5]==board[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 4:
        if((board[4]==board[5]&&board[5]==board[6])||(board[1]==board[4]&&board[4]==board[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 5:
        if((board[1]==board[5]&&board[5]==board[9])||(board[4]==board[5]&&board[5]==board[6])||(board[2]==board[5]&&board[5]==board[8])||(board[3]==board[5]&&board[5]==board[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 6:
        if((board[4]==board[5]&&board[5]==board[6])||(board[3]==board[6]&&board[6]==board[9]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 7:
        if((board[7]==board[8]&&board[8]==board[9])||(board[1]==board[4]&&board[4]==board[7])||(board[3]==board[5]&&board[5]==board[7]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 8:
        if((board[7]==board[8]&&board[8]==board[9])||(board[8]==board[5]&&board[5]==board[2]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;

    case 9:
        if((board[7]==board[8]&&board[8]==board[9])||(board[1]==board[5]&&board[5]==board[9])||(board[9]==board[6]&&board[6]==board[3]))
        {
            cout<<"\n\nplayer "<<(!(turn%2)+1)<<" is the winner"<<endl;
            turn=9;
        }
        break;
    }
}