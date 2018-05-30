// 122 - Best Time to Buy and Sell Stock II

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;
        int hold = 0;
        int sell = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            hold = max(hold + prices[i] - prices[i - 1], sell);
            sell = max(hold, sell);
        }
        return max(hold, sell);
    }
};