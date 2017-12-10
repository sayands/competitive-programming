#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int result(int a[],int n,int distance,int s,int t)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]+distance>=s) && (a[i]+distance)<=t)
            count++;
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s,t,a,b,n,m;
    cin>>s>>t;
    cin>>a>>b;
    cin>>n>>m;
    int apple[n],orange[m];
    for(int i=0;i<n;i++)
        cin>>apple[i];
    for(int i=0;i<m;i++)
        cin>>orange[i];
    cout<<result(apple,n,a,s,t)<<"\n"<<result(orange,m,b,s,t);
    return 0;
}
