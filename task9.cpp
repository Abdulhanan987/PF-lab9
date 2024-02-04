#include<iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main()
{      int y =4;
    double arr[y];
    cout<<"Enter quarters: ";
    cin>>arr[0];
    cout<<"Enter dimes: ";
    cin>>arr[1];
    cout<<"Enter nickels: ";
    cin>>arr[2];
    cout<<"Enter pennies: ";
    cin>>arr[3];
    double amount;
    cout<<"Enter the total amount due: $";
    cin>>amount;
    
    cout<<"Can we pay with change?: ";
   if( canPayWithChange(arr,amount))
    {cout<<"Yes";
    }
    else

    cout<<"No";

}
bool canPayWithChange(double change[], double totalDue)
{    bool result = false;
    double total = change[0]*0.25+change[1]*0.10+change[2]*0.05+change[3]*0.01;
    if(total>=totalDue)
{
    result = true;

}
return result;
}