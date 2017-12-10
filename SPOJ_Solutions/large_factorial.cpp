#include <iostream>
using namespace std;

int zero_count(long long int n)
{
    int count=0,fact=5;
    while(n/fact!=0)
    {
        count+=n/fact;
        fact*=5;
    }
    return count;
}

int main()
{

    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<zero_count(arr[i])<<endl;
}
