#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isNumeric(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}
int atoi(string str)
{
    //Your code here
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    int res = 0;
    for (; str[i] != '\0'; i++)
    {
        if (isNumeric(str[i]) == false)
            return -1;

        res = res * 10 + str[i] - '0';
    }

    return res * sign;
}