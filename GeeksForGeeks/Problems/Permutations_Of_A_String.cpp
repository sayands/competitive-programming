#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        cout << a << " ";

    for (int i = l; i <= r; i++)
    {
        swap((a + l), (a + i));
        permute(a, l + 1, r);
        swap((a + l), (a + i));
    }
}
int main()
{
    //code
    int test = 0;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        char str[5];
        cin >> str;
        int n = strlen(str);
        permute(str, 0, n - 1);
        cout << endl;
    }
    return 0;
}