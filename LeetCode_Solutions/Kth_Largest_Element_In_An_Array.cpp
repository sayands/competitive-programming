// 215 - Kth Largest Element in an Array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> pq_nums(nums.begin(), nums.end());

        while (k-- > 1)
            pq_nums.pop();
        return pq_nums.top();
    }
};