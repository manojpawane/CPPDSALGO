#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int minimumRange, maximumRange = 0;
    cout << "Enter the minimum range..";
    cin >> minimumRange;
    cout << "Enter the Maximum range..";
    cin >> maximumRange;
    int remainder, temp, tempTwo, sum, sumOne;
    remainder = 0;
    for(int i = minimumRange; i < maximumRange; i++)
    {
        temp = i;
        tempTwo = i;
        sum = 0;
        sumOne = 0;
        while(temp != 0)
        {
            remainder = temp % 10;
            double value = pow(remainder, 3);
            sumOne = sumOne + value;
            sum = sum + remainder * remainder * remainder;
            temp = temp/10;
        }

        if(sum == tempTwo && sumOne == tempTwo)
        {
            cout << tempTwo << endl;
        }
    }
}
