#include<iostream>
using namespace std;
void myFunction(string word);

main()
{
    cout<<"Enter a string: ";
    
    string word;
    cin>>word;
    cout<<"Reversed string: ";
    myFunction(word);
}
void myFunction(string word)
{   int m =0;
     for(int y =0; word[y]!=0;y++)
           m = m+1;
         
    for(int x =m-1;x>=0;x--)
    {
        cout<<word[x];
    }
}