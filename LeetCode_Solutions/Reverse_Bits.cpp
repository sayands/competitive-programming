//190 - Reverse Bits

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    uint32_t reverseBits(uint32_t num)
    {
        unsigned int count = sizeof(num) * 8 - 1;
        unsigned int reverse_num = num;

        num >>= 1;
        while (num)
        {
            reverse_num <<= 1;
            reverse_num |= num & 1;
            num >>= 1;
            count--;
        }

        reverse_num <<= count;
        return reverse_num;
    }
};