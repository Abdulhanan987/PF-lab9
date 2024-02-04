#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number);
main()
{        int number; bool result;
    cout<<"Enter the number of elements: ";
    int num;
    cin>>num;
    int arr[num];
     cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
    for(int x=0;x<num;x++)
    {  
        cin>>arr[x];
        number=arr[x];
        if(x>=1)
        {
           if( isAlreadyEntered(arr, num, number))
           {
            cout<<"Already entered: "<<number<<endl;
           }
        }
    }
    cout<<"Unique numbers entered: ";
     for(int x=0;x<num;x++)
     {     int y = arr[x];
          result=isAlreadyEntered(arr,num,y);
          if(result==false)
          {
            cout<<y<<" ";
          }
     }
}
bool isAlreadyEntered(int arr[], int size, int number)
{      bool isFound = false;
        for(int x =0; x<size;x++)
        {
            if (arr[x]==number)
            {     isFound = true;
                     break;
            }
             
        }
    return isFound;
}