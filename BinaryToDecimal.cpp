#include<iostream>
#include<math.h>
using namespace std;
int BinaryToDecimal(long);
int main()
{
    long binaryValue = 0;
    cout<<"Enter the Binary values to convert it into Decimal..";
    cin >> binaryValue;
    int sum = BinaryToDecimal(binaryValue);
    cout << "Binary: " << binaryValue << "Decimal: " << sum;
}

int BinaryToDecimal(long binaryValue)
{
    int i = 0;
    int temp = 0;
    int sum = 0;
    while(binaryValue != 0)
    {
        temp = binaryValue % 10;
        sum = sum + (temp * (pow(2, i)));
        binaryValue = binaryValue / 10;
        i++;
    }
    return sum;
}
