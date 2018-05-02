//217 - Contains Duplicate
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool containsDuplicate(vector<int> &nums)
    {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};