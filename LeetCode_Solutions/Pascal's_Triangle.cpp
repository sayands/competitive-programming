//118 - Pascal's Triangle

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vec;
        st for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++)
                row[j] = vec[i - 1][j - 1] + vec[i - 1][j];
            vec.push_back(row);
        }
        return vec;
    }
};