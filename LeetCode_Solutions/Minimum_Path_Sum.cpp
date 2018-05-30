// 64 - Minimum Path Sum

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        if (m == 0)
            return 0;
        int n = grid[0].size();
        if (n == 0)
            return 0;

        vector<vector<int>> res(m + 1, vector<int>(n + 1, INT_MAX));

        res[0][1] = 0;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                res[i][j] = min(res[i - 1][j], res[i][j - 1]) + grid[i - 1][j - 1];
            }
        }
        return res[m][n];
    }
};