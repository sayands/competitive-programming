#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<3;j++)
           cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
       int d_a = abs(arr[i][0] - arr[i][2]);
       int d_b = abs(arr[i][1] - arr[i][2]);
       if(d_a > d_b)
           cout<<"Cat B\n";
       else if(d_a < d_b)
           cout<<"Cat A\n";
        else
            cout<<"Mouse C\n";
     }
    return 0;
}
