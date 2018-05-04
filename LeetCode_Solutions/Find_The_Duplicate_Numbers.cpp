// 287 - Find The Duplicate Number

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[abs(nums[i])] >= 0)
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
                return abs(nums[i]);
        }
    }
};