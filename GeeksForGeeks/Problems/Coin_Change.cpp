#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int coinCount(int S[], int m, int n)
{
    int i, j, x, y;

    int table[n + 1][m];

    for (i = 0; i < m; i++)
        table[0][i] = 1;

    for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i - S[j] >= 0) ? table[i - S[j]][j] : 0;
            y = (j >= 1) ? table[i][j - 1] : 0;

            table[i][j] = x + y;
        }
    }

    return table[n][m - 1];
}
int main()
{
    //code
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int m, n;
        cin >> m;
        int S[m];
        for (int j = 0; j < m; j++)
            cin >> S[j];
        cin >> n;
        cout << coinCount(S, m, n) << endl;
    }
    return 0;
}