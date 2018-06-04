//279 - Perfect Squares

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int numSquares(int n)
    {
        vector<int> dp{0};

        while (dp.size() <= n)
        {
            int m = dp.size(), squares = INT_MAX;
            for (int i = 1; i * i <= m; i++)
                squares = min(squares, dp[m - i * i] + 1);
            dp.push_back(squares);
        }
        return dp[n];
    }
};