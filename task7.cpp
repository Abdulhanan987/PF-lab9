#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
main()
{
    cout<<"Enter the number of resistors in the series circuit: " ;
        int num;
        cin>>num;
        double resistance[num];
        cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line: "<<endl;;
        for(int x=0;x<num;x++)
        {
            cin>>resistance[x];
        }
     double result = calculateTotalResistance(resistance,num);
     cout<<"The total resistance of the series circuit is: "<<result<<" ohms.";
}
double calculateTotalResistance(double resistance[], int size)
{ double result =0;  double y =0;
    for(int x=0;x<size;x++)
    {
          result = resistance[x] +y;
          y=result;
    }
    return result;
}