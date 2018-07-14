#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int searchRotated(int nums[], int n, int target)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > nums[r])
        {
            if (target < nums[mid] && target >= nums[l])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else if (nums[mid] < nums[l])
        {
            if (target > nums[mid] && target <= nums[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
        else
        {
            if (target > nums[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    return -1;
}
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
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int k;
        cin >> k;
        cout << searchRotated(nums, n, k) << endl;
    }
    return 0;
}