// 394 - Decode String

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string helper(int &pos, string s)
    {
        int num = 0;
        string word = "";

        for (; pos < s.size(); pos++)
        {
            char cur = s[pos];
            if (cur == '[')
            {
                string curStr = helper(++pos, s);
                for (; num > 0; num--)
                    word += curStr;
            }
            else if (cur >= '0' && cur <= '9')
                num = num * 10 + cur - '0';
            else if (cur == ']')
                return word;
            else
                word += cur;
        }
        return word;
    }
    string decodeString(string s)
    {
        int pos = 0;
        return helper(pos, s);
    }
};