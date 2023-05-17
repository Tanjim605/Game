void get_choice(int turn)
{
    cin>>c;
    if(c>9 || c<1){
        cout<<"Enter a value between 1 to 9\n";
        get_choice(turn);
    }
        
    else if(board[c]==" ")
    {
        if(turn%2)
            board[c]=FUO;
        else
            board[c]=SUO;
    }
    else
    {
        cout<<"This position is already taken. Enter a valid one.\n";
        get_choice(turn);
    }
}