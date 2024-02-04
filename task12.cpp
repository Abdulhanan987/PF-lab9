#include<iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main()
{
   cout<<"Enter the number of elements in array: ";
   int num;
   cin>>num;
   int arr[num];
   cout<<"Enter "<<num<<" elements, one per line: "<<endl;
   for(int x=0; x<num;x++)
   {
    cin>>arr[x];
   }
   if(isSpecialArray(arr,num))
   {
    cout<<"The array is special";
   }
   else
   cout<<"The array is not special";
}
bool isSpecialArray(int arr[], int size)
{   bool result = true;
    for(int x=0;x<size;x++)
    {
        if((x%2==0&&arr[x]%2!=0)||(x%2!=0&&arr[x]==0))
        {
            result = false;
            
        }
    }
    return result;
}