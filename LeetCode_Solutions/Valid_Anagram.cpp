// 242 - Valid Anagram
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isAnagram(string s, string t)
    {
        int count[26] = {0};
        int i;
        for (i = 0; s[i] && t[i]; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        if (s[i] || t[i])
            return false;

        for (int i = 0; i < 26; i++)
            if (count[i])
                return false;

        return true;
    }
};