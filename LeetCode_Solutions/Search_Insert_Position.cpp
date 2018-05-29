//35 - Search Insert Position
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1, mid = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return nums[mid] > target ? mid : mid + 1;
    }
};