#include "play.h"

main()
{
    do
    {
        play();
        cout<<"\n\nDo you want to play again?";
        cout<<"\n\t0: no\n\t1: yes\n\n";
        cin>>p;
    }
    while(p);
    
    system("CLS");
    cout<<"\n\n\t\tThanks for playing\n";
    sleep(3);       //waits 3 seconds
    return 0;
}