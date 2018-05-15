// 70 - Climbing Stairs

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int climbStairs(int n)
    {
        int dp[n + 1];

        for (int i = 0; i < 3 && i <= n; i++)
            dp[i] = i;
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};