void option_choose()
{
    int op;
    cout<<"\n\n\tChoose player1's option"
        <<"\n\t\t1. x\n\t\t2. o\n";
    cin>>op;
    if(op==1)
    {
        FUO="x";
        SUO="o";
    }
    else
    {
        FUO="o";
        SUO="x";
    }
        
    
}