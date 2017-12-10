#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display_pair_count(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n; if(arr[i] ^ arr[i+1] == 0)
        {
            count++;
            arr[i+1]=0;
        }j++)
       {
           if(arr[j] == arr[i] && arr[j]!=0)
           {
               count++;
               arr[j]=arr[i]=0;
           }
       }
    }
    cout<<count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    display_pair_count(arr,n);
    return 0;
}
