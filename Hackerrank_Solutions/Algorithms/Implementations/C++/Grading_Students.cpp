#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,marks;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>marks;
        if(marks%5>=3 && marks>=38)
            arr[i]= ((marks/5)+1)*(5);
        else
            arr[i]=marks;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
