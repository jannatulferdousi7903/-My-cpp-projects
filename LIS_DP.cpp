#include<bits/stdc++.h>
using namespace std;
int lis(int i, int p, vector<int>&nums)
{
    if (i>=nums.size())
    {return 0;}

int skip = lis(i+1, p , nums);
int take=0;
if (p==1 || nums[p]<nums[i]){
    take = 1+ lis (i+1, i, nums);
}

    return max ( take, skip);
}
int main()
{

     vector <int>nums= {10,9,2,3,5,7,101,18};
     int result = lis (0,-1,nums);
     cout<<result<<endl;
     return 0;
}
