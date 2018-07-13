#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkMajority(int a[], int size)
{
    int maj_index = 0, count = 1;

    for (int i = 1; i < size; i++)
    {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[maj_index] == a[i])
            count++;
    }

    if (count > size / 2)
        return a[maj_index];
    else
        return -1;
}

int main()
{
    //code
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int size;
        cin >> size;
        int nums[size];
        for (int j = 0; j < size; j++)
            cin >> nums[j];

        int result = checkMajority(nums, size);
        if (result >= 0)
            cout << result << endl;
        else
            cout << "NO Majority Element" << endl;
    }
    return 0;
}