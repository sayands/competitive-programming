//204 - Count Primes
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int countPrimes(int n)
    {
        if (n > 0)
        {
            bool notPrime[n] = {false};
            int count = 0;
            for (int i = 2; i < n; i++)
            {
                if (notPrime[i] == false)
                {
                    count++;
                    for (int j = 2; i * j < n; j++)
                        notPrime[i * j] = true;
                }
            }
            return count;
        }
        return 0;
    }
};