// 75 - Sort colors
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1, i = 0;

        while (i <= high)
        {
            if (nums[i] > 1)
            {
                swap(nums[i], nums[high]);
                high--;
            }
            else if (nums[i] < 1)
            {
                swap(nums[i], nums[low]);
                i++;
                low++;
            }
            else
                i++;
        }
    }
};