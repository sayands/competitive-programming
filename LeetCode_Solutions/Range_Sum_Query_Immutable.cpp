// 303 - Range Sum Query - Immutable
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class NumArray
{
  private:
    vector<int> accu;

  public:
    NumArray(vector<int> nums)
    {
        accu.push_back(0);
        for (int num : nums)
            accu.push_back(accu.back() + num);
    }

    int sumRange(int i, int j)
    {
        return accu[j + 1] - accu[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */