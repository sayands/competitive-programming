#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_score(int a[],int n)
{
    int low=a[0],high=a[0],low_count=0,high_count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            high_count++;
        }
        if(a[i]<low)
        {
            low=a[i];
            low_count++;
        }
    }
    cout<<high_count<<" "<<low_count;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    print_score(arr,n);
    return 0;
}
