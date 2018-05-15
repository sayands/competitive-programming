//338 - COunting Bits
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> countBits(int num)
    {
        vector<int> res;
        res.push_back(0);

        for (int n = 1; n <= num; n++)
            res.push_back(res[n >> 1] + n % 2);
        return res;
    }
};