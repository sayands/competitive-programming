// 28 - Implement strStr()

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int strStr(string haystack, string needle)
    {
        int m = haystack.length(), n = needle.length();
        int i = 0, j = 0;
        if (!n)
            return 0;
        for (i = 0; i <= m - n; i++)
        {
            while (haystack[i + j] == needle[j])
            {
                j++;
                if (j == n)
                    return i;
            }
            j = 0;
        }
        return j == n ? i : -1;
    }
};