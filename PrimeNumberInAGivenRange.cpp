#include<iostream>
using namespace std;
int main()
{
    int minimum, maximum;
    cout<<"Enter the minimum range";
    cin >> minimum;

    cout << "Enter the maximum range";
    cin >> maximum;
    cout<< "Prime number in given range are..";
    for(int i = minimum; i < maximum; i++)
    {
        int flag = 0;
        for(int j = 1; j <=i; j++)
        {
            if(i % j == 0)
            {
                flag ++;
            }
        }
        if(flag == 2)
        {
            cout<< i;
        }
    }
}
