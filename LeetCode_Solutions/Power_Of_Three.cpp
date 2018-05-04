// 326 - Power Of Three

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;
        return 1162261467 % n == 0;
    }
};