#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int magic_beverage(int a[],int n,int k)
{
    int max_b=a[0];
    for(int i=0;i<n;i++)
    {
        max_b = max(a[i],max_b);
    }
    return (max_b>k)?(max_b-k):0;
 }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<magic_beverage(arr,n,k);
    return 0;
}
