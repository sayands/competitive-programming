// 532 - K-diff Pairs in an Array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int findPairs(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;

        unordered_set<int> starters;
        unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); i++)
        {
            if (indices.count(nums[i] - k))
                starters.insert(nums[i] - k);
            if (indices.count(nums[i] + k))
                starters.insert(nums[i]);

            indices[nums[i]] += 1;
        }

        return starters.size();
    }
};