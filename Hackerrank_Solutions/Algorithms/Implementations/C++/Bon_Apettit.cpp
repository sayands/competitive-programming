#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void overcharge_check(int food[],int n,int k,int b_charged)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=food[i];
    }
    sum-=food[k];
    if(sum/2 == b_charged)
        cout<<"Bon Appetit";
    else
        cout<<(b_charged-(sum/2));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,b_charged;
    cin>>n>>k;
    int food[n];
    for(int i=0;i<n;i++)
        cin>>food[i];
    cin>>b_charged;
    overcharge_check(food,n,k,b_charged);
    return 0;
}
