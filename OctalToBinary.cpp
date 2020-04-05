#include<iostream>
#include<math.h>
using namespace std;

int OctalToDecimal(int number)
{
    int decimal = 0;
    int i = 0;
    int remainder = 0;
    while(number != 0)
    {
        remainder = number % 10;
        decimal = decimal + (remainder * pow(8, i));
        number = number / 10;
        i++;
    }
    return decimal;
}

long DecimalTOBinary(int number)
{
    int remainder = 0;
    int i = 1;
    long Binary = 0;
    while(number != 0)
    {
        remainder = number % 2;
        Binary = Binary + remainder * i;
        i = i * 10;
        number = number / 2;
    }
    return Binary;
}

int main()
{
    int remainder = 0;
    int number = 0;
    cout<<"Enter Octal Number to find Binary Convertion..";
    cin>>number;
    int decimal = OctalToDecimal(number);
    cout<<"Decimal.." << decimal;
    long binary = DecimalTOBinary(decimal);
    cout<<"Binary.." <<binary;
}
