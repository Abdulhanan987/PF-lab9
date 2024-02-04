#include<iostream>
#include<string>
using namespace std;
void myFunction(string word);
main()
{
    cout<<"Enter a string: ";
    string statement;
    getline(cin,statement);
    cout<<"Shifted string: ";
      myFunction(statement);
}
void myFunction(string word)
{    char character;
    for(int x =0;word[x]!='\0';x++)
    {       
        int asciicode = word[x];
         if((asciicode!=90)&&(asciicode!=122)&&(asciicode!=32))
          asciicode = asciicode+1;
        if (asciicode==90)
          asciicode = 65;
          if(asciicode==122)
           asciicode==97;
           if(asciicode==32)
           asciicode=32;
          
          character = asciicode;
          
        
        cout<<character;
    }
    
}