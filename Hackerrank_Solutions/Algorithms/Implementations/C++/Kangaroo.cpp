#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if((x1<x2 && v1<v2) || (x1>x2 && v1>v2))
        cout<<"NO";
    else
    {
        if(v1!=v2 && (x1-x2)%(v1-v2) == 0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
