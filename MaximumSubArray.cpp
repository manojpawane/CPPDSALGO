#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int sum  = nums.at(0);
    int temp = 0;
    int i = 0;
    while(i < nums.size())
    {
        temp = 0;
        for(int j = i; j < nums.size(); j++)
        {
            temp = temp + nums.at(j);
            if(temp > sum)
            {
                sum = temp;
            }
        }
        i++;
    }
cout<< sum;
}
