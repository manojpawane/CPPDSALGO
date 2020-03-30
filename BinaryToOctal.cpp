#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(long);
int DecimalToOctal(int);
int main()
{
    long number;
    cout<< "Enter the value to convert it to Octal..";
    cin>>number;
    int decimalValue = BinaryToDecimal(number);
    cout << "Binary conversion of respective number is.." << decimalValue << endl;
    int octalValue = DecimalToOctal(decimalValue);
    cout << "Octal conversion of respective number is.." << octalValue;
}

int BinaryToDecimal(long number)
{
    int temp = 0;
    int reminder = 0;
    int i = 0;
    int sum = 0;
    while(number != 0)
    {
        reminder = number % 10;
        temp = reminder * (pow(2, i));
        sum = sum + temp;
        number = number / 10;
        i++;
    }
    return sum;
}


int DecimalToOctal(int number)
{
    int reminder = 0;
    int sum = 0;
    int i =1;
    while(number != 0)
    {
        reminder = number % 8;
        sum = sum + reminder * i;
        i = i * 10;
        number = number / 10;
    }
    return sum;
}
