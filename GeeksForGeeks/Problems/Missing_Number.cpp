#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int test = 0;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int N;
        cin >> N;
        int nums[N - 1];

        for (int j = 0; j < N - 1; j++)
            cin >> nums[j];

        int x1 = nums[0], x2 = 1;

        for (int j = 1; j < N - 1; j++)
            x1 = x1 ^ nums[j];

        for (int j = 2; j <= N; j++)
            x2 = x2 ^ j;

        int res = x1 ^ x2;
        cout << res << endl;
    }
    return 0;
}