// 387 - First Unique Character in a String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int firstUniqChar(string s)
    {
        vector<int> v(26, 0);

        for (auto u : s)
            v[u - 'a']++;
        for (int i = 0; i < s.size(); i++)
            if (v[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};