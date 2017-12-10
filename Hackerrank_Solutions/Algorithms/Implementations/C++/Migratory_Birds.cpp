#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count_max_bird(int a[],int n)
{
    int birds[5]={0};
    for(int i=0;i<n;i++)
        birds[a[i]-1]++;
    int max = birds[0],large=1;
    for(int i=0;i<5;i++)
    {
        if(birds[i]>max)
        {
            max=birds[i];
            large=i+1;
        }
    }
    return large;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<count_max_bird(arr,n);
    return 0;
}
