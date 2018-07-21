#include <iostream>
#include <bits/stdc++.h>>
using namespace std;

int check(string str)
{
    int length = str.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (str[i] == '1')
            return i;
    }

    return -1;
}
int main()
{
    //code
    int test = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string str;
        cin >> str;

        cout << check(str) << endl;
    }
    return 0;
}