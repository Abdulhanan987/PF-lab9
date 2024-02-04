#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
main()
{    int rsult;
    
    cout<<"Enter the number of elements: ";
    int num;
    cin>>num;
     int arr[num];
       cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
       for (int x =0; x<num;x++)
       {
            cin>>arr[x];
       }
       rsult=findLargestNumber(arr,num);
       cout<<"The largest number entered is: "<<rsult;
}
int findLargestNumber(int arr[], int size)
{     int result =0;
    for(int x=0;x<size;x++)
    {
         if(arr[x]>arr[x+1])
         {
            result =arr[x];
         }
         if(x+1==size&&arr[x]>arr[0])
         {
            result = arr[x];
         }
    }
    return result;
}