#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int birthday_chocolate(int a[],int n,int d,int m)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i+1;j<(i+m) && j<n;j++)
        {
            sum+=a[j];
        }
        if(sum+a[i] == d)
            count++;
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d>>m;
    cout<<birthday_chocolate(arr,n,d,m);
    return 0;
}
