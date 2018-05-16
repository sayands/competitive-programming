//121 - Best Time To Buy and Sell Stock
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int buy = INT_MAX;
        int sell = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            buy = min(buy, prices[i]);
            sell = max(sell, prices[i] - buy);
        }
        return sell;
    }
};