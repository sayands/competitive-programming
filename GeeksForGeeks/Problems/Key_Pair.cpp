#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define MAX 500000

int keyPair(int nums[], int n, int sum)
{
    bool s[MAX] = {0};
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = sum - nums[i];

        if (temp >= 0 && s[temp] == 1)
            return 1;

        s[nums[i]] = 1;
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
        int n, sum;
        cin >> n >> sum;
        int nums[n];
        for (int j = 0; j < n; j++)
            cin >> nums[j];

        int res = keyPair(nums, n, sum);
        if (res > 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}