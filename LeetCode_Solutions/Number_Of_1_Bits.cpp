// 191- Number of 1 Bits

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int hammingWeight(uint32_t n)
    {
        if (n == 0)
            return 0;
        else
            return 1 + hammingWeight(n & (n - 1));
    }
};