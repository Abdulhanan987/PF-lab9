#include<iostream>
using namespace std;
void insertArrayMiddle(int firstArray[],int firstArraySize,int secondArray[],int secondArraySize);

main()
{
cout<<"Enter the number of elements for first array (must be 2): ";
   int firstArraySize=2;
   cin>>firstArraySize;
   int firstArray[firstArraySize];
   cout<<"Enter "<<firstArraySize<<" elements for first array, one per line: "<<endl;
   for(int x=0;x<firstArraySize;x++)
   {
    cin>>firstArray[x];
   }
   cout<<"Enter the number of elements for second array: ";
   int secondArraySize;
   cin>>secondArraySize;
   int secondArray[secondArraySize];
   cout<<"Enter "<<secondArraySize<<" elements for second array, one per line: "<<endl;
   for(int x=0;x<secondArraySize;x++)
   {
    cin>>secondArray[x];
   }
   insertArrayMiddle(firstArray,firstArraySize,secondArray,secondArraySize);
}
void insertArrayMiddle(int firstArray[],int firstArraySize,int secondArray[],int secondArraySize)
{
cout<<"["<<firstArray[0]<<", ";
for (int x=0;x<secondArraySize;x++)
{
    cout<<secondArray[x]<<", ";
}
cout<<firstArray[1]<<"]";
}
