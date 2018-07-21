#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortArray(int nums[], int n)
{
    int count[3] = {0};
    for (int i = 0; i < n; i++)
        count[nums[i]] += 1;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[x] == 0)
        {
            ++x;
            --i;
        }

        else
        {
            nums[i] = x;
            --count[x];
        }
    }

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
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
        for (int j = 0; j < n; j++)
            cin >> nums[j];

        sortArray(nums, n);
    }
    return 0;
}