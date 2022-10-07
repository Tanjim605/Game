void print_board()
{
    for(int i=1;i<=9;i++)
    {
        if(i==1||i==4||i==7)
            cout<<"\t\t\t";
        cout<<board[i];
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