// 628 - Maximum Product of Three Numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return max(nums[0] * nums[1], nums[n - 2] * nums[n - 3]) * nums[n - 1];
    }
};