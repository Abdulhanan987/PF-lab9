#include<iostream>
using namespace std;
void printReverseArray(int arr[], int n);
main()
{
    cout<<"Enter the number of elements: ";
    int num;
    cin>>num;
    
    if (num<=0)
    cout<<"Invalid input. Number of elements should be greater than 0. ";
       int arr[num];
       cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
       for (int x =0; x<num;x++)
       {
            cin>>arr[x];
       }
       cout<<"Numbers in reverse order: ";
       printReverseArray(arr,num);

}
void printReverseArray(int arr[], int n)
{
    for(int x = n-1;x>=0;x--)
    {
        cout<<arr[x]<<" ";
    }
    cout<<endl;
}