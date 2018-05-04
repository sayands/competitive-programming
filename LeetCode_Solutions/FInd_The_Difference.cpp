//389 - Find The Difference
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
  public:
    char findTheDifference(string s, string t)
    {
        int res[26] = {0};
        for (int i = 0; i < s.size(); i++)
            res[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++)
            res[t[i] - 'a']--;

        for (int i = 0; i < 26; i++)
            if (res[i])
                return (char)(i + 'a');
    }
};