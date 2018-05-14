// 34 - Search For A Range
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size(), first = -1, last = -1;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                first = mid;
                break;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }

        if (first != -1)
        {
            last = first;
            while (first > 0 && nums[first - 1] == target)
                first--;
            while (last < nums.size() - 1 && nums[last + 1] == target)
                last++;
        }
        vector<int> res;
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};