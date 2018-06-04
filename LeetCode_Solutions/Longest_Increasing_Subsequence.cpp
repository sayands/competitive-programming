// 300 - Longest Increasing Subsequence

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int lengthOfLIS(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        vector<int>::iterator m = nums.begin();
        for (int &val : nums)
        {
            auto it = lower_bound(nums.begin(), m, val);
            *it = val;
            if (it == m)
                m++;
        }
        return m - nums.begin();
    }
};