#include<iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords);
main()
{
    cout<<"Enter the number of chords: ";
    int num;
    cin>>num;
    string arr[num];
    cout<<"Enter "<<num<<" chords, one per line: "<<endl;
    for(int x=0;x<num;x++)
    {
       cin>>arr[x];
    }
     jazzifyChords(arr,num);
}
void jazzifyChords(string chords[], int numChords)
{    int y =0; string var; int z =0;
    cout<<"[";
    for (int x =0;x<numChords;x++)
    {
           var = chords[x];
            
           for(int n = 0; var[n]!='\0';n++)
           {
            y = y+1;
           }
           if(var[z]!=7)
           {
               cout<<var<<"7, ";
           }
           else
           cout<<var<<", ";
    }
    cout<<"]";
}
