#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int height_calculator(int cycle)
{
    int res_height=1,final=1;
    while(final<=cycle)
    {
        if(final%2 == 0)
            res_height+=1;
        else
            res_height*=2;
        final++;
    }
    return res_height;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n; int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<height_calculator(arr[i])<<"\n";

    return 0;
}
