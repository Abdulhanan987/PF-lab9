#include<iostream>
using namespace std;
main ()
{      int y =0;
    cout<<"Enter a string: ";
    string arg;
    getline(cin,arg);
    for(int x =0; arg[x]!='\0';x++)
    {
        y=y+1;
    }
    cout<<"String with vowels removed: ";
    for (int x =0; x<=y;x++)
    {
        int asciicode = arg[x];
        if(asciicode!=65&&asciicode!=69&&asciicode!=73&&asciicode!=79&&asciicode!=85&&asciicode!=97&&asciicode!=101&&asciicode!=105&&asciicode!=111&&asciicode!=117)
        {
            cout<<arg[x];
        }
    }
}