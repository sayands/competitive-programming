//202 - Happy Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isHappy(int n)
    {
        map<int, int> M;
        int len = 0;
        while (n != 1)
        {
            if (M.find(n) != M.end())
                return false;
            else
            {
                int sum = 0;
                while (n != 0)
                {
                    sum += (n % 10) * (n % 10);
                    n /= 10;
                }
                M[len++] = sum;
                n = sum;
            }
        }
        return true;
    }
};