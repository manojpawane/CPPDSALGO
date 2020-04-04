#include<iostream>
using namespace std;
long DecimalToBinary(int);

int main()
{
    int ch = 0;

    cin >> ch;
    int number = 0;
    cout << "Enter the value to convert it to Binary..";
    cin >> number;
    long binaryNumber = DecimalToBinary(number);
    cout << "Binary convertion of Decimal number is.." << binaryNumber;
    }
}

long DecimalToBinary(int number)
{
    int temp = 0;
    int reminder = 0;
    long binaryValue = 0;
    int i = 1;
    while(number != 0)
    {
        reminder = number % 2;
        binaryValue = binaryValue + reminder * i;
        i = i * 10;
        number = number / 2;
    }
    return binaryValue;
}
