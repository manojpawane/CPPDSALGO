#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int first, second;
    cout << "Enter 2 values A and B to find LCM..";
    cin>> first >> second;
    int flag = 0;
    int value = first;
    while(flag != 1)
    {
        count++;
        if(value % first ==0 && value % second == 0)
        {
            flag = 1;
            value = value - first;
        }
        value = value + first;
    }
    cout<<"LCM.." << value;
    cout<< "Count.." << count;
}
