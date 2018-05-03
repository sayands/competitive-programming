//7 - Reverse Integer

#include <iostream>
using namespace std;

class Solution
{
  public:
    int reverse(int x)
    {
        long int rev = 0;
        while (x != 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (rev > INT_MIN && rev < INT_MAX)
            return rev;
        return 0;
    }
};