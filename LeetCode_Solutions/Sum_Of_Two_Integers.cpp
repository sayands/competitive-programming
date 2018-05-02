// 371 - Sum of Two Integers

#include <iostream>
using namespace std;

class Solution
{
  public:
    int getSum(int a, int b)
    {
        int res = a ^ b;
        int c = a & b;
        if (c == 0)
            return res;
        return getSum(res, c << 1);
    }
};