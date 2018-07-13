#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;
        int nums[n];

        for (int j = 0; j < n; j++)
            cin >> nums[j];

        int curr_max = nums[0];
        int max_so_far = nums[0];

        for (int j = 1; j < n; j++)
        {
            curr_max = max(nums[j], curr_max + nums[j]);
            max_so_far = max(curr_max, max_so_far);
        }

        cout << max_so_far << endl;
    }
    return 0;
}