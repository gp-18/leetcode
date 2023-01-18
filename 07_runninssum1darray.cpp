#include<bits/stdc++.h>
using namespace std;
int main()
{
 nums[0] = nums[0];
        for(int i = 1 ; i < nums.size() ; ++i)
        {
            nums[i]=nums[i]+nums[i-1];
        }

        return nums;
return 0;
}