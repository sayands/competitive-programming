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
        string num;
        cin >> num;
        char state = '0';
        for (int j = 0; j < num.size(); j++)
        {
            char digit = num[j];

            switch (state)
            {
            case '0':
                if (digit == '1')
                    state = '1';
                break;
            case '1':
                if (digit == '0')
                    state = '2';
                else
                    state = '0';
                break;
            case '2':
                if (digit == '0')
                    state = '1';
                break;
            }
        }

        if (state == '0')
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}