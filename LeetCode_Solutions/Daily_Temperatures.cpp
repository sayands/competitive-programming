// 739 - Daily Temperatures

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();

        vector<int> vec(n, 0);
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (!s.empty() && temperatures[s.top()] < temperatures[j])
            {
                vec[s.top()] = j - s.top();
                s.pop();
            }
            s.push(i);
        }

        return vec;
    }
};