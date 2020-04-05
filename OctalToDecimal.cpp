#include<iostream>
#include<math.h>
using namespace std;
OctalToDecimalConvertor(int number)
{
    int remainder = 0;
    int decimal = 0;
    int i = 0;
    while(number != 0)
    {
        remainder = number % 10;
        decimal = decimal + remainder * (pow(8, i));
        i++;
        number = number / 10;
    }
    return decimal;
}
int main()
{
    int number = 0;
    cout<<"Enter the Octal Number to convert it to Decimal..";
    cin>>number;
     int decimalNumber = OctalToDecimalConvertor(number);
    cout<<"Decimal Number.."<<decimalNumber;
}
