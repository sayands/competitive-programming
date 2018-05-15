//38 - Count and Say
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string read(string s)
    {
        string str = "";
        int count;
        for (int i = 0; i < s.length(); i++)
        {
            count = 1;
            while (i + 1 < s.length() && s[i] == s[i + 1])
            {
                count++;
                i++;
            }
            str += to_string(count) + s[i];
        }
        return str;
    }
    string countAndSay(int n)
    {
        string s = "1";
        while (n > 1)
        {
            s = read(s);
            n--;
        }
        return s;
    }
};