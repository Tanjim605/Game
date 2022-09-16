#include "play.h"

main()
{
    do
    {
        play();
        cout<<"Do you want to play again?";
        cout<<"\n\t0: no\n\t1: yes\n\n";
        cin>>p;
    }
    while(p);
    
    cout<<"Thanks for playing\n";
    sleep(3);       //waits 3 seconds
    return 0;
}