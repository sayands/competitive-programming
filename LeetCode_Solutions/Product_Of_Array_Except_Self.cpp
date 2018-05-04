// 238 - Product of array except Self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        int left[n], right[n];
        vector<int> prod;

        left[0] = 1;
        right[n - 1] = 1;

        for (int i = 1; i < n; i++)
            left[i] = left[i - 1] * nums[i - 1];

        for (int j = n - 2; j >= 0; j--)
            right[j] = right[j + 1] * nums[j + 1];

        for (int i = 0; i < n; i++)
            prod.push_back(left[i] * right[i]);

        return prod;
    }
};