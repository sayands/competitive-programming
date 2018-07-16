#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minOperation(string str1, string str2, int m, int n)
{
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j]));
        }
    }

    return dp[m][n];
}
int main()
{
    //code
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string str1, str2;
        int m, n;
        cin >> m >> n;
        cin >> str1 >> str2;
        cout << minOperation(str1, str2, m, n) << endl;
    }
    return 0;
}