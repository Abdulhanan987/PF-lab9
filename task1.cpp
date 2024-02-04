#include<iostream>
using namespace std;
void myFunction(string word);
main()
{
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    myFunction(word);
}
void myFunction(string word)
{
    for(int x =0; word[x]!='\0';x++)
    {
        cout<<word[x]<<" found at position "<<x +1;
    }
}