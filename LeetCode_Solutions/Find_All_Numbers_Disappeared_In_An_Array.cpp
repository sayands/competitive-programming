// 448 - Find All Numbers Disappeared In An Array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int val = abs(nums[i]) - 1;
            if (nums[val] > 0)
                nums[val] = -nums[val];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                res.push_back(i + 1);
        }
        return res;
    }
};