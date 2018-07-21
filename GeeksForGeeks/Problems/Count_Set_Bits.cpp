#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countSetBits(n & n - 1);
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
        cout << countSetBits(n) << endl;
    }
    return 0;
}