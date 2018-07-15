#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int n;
        cin >> n;
        int nums[n];

        for (int j = 0; j < n; j++)
            cin >> nums[j];

        vector<int> res;
        res.push_back(nums[n - 1]);
        int max_from_right = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] > max_from_right)
            {
                res.push_back(nums[i]);
                max_from_right = nums[i];
            }
        }

        for (int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}