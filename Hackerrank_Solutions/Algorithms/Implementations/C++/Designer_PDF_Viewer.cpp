#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int alphabet_height[26];
    for(int i=0;i<26;i++)
        cin>>alphabet_height[i];
    char str[10];
    cin>>str;
    char max = alphabet_height[(int)(str[0] - 'a')];
    for(int i=0;i<strlen(str);i++)
    {
        if(max < alphabet_height[(int)(str[i] - 'a')])
           max = alphabet_height[(int)(str[i] - 'a')];
    }
    int area = max*strlen(str);
    cout<<area;
    return 0;
}
