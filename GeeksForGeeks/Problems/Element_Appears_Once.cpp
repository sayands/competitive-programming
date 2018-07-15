#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //code
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int nums[n];
        for (int j = 0; j < n; j++)
            cin >> nums[j];

        int res = nums[0];
        for (int j = 1; j < n; j++)
            res ^= nums[j];

        cout << res << endl;
    }
    return 0;
}