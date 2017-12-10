#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    return s;
}
int main()
{
    int n,a1,b,c;
    cin>>n;
    int length = n*2;
    int a[length];
    for(int i=0;i<length;i++)
        cin>>a[i];
    for(int i=0;i<length;i+=2)
    {
        a1 = reverse(a[i]);
        b = reverse(a[i+1]);
        c = a1 + b;
        cout<<reverse(c)<<endl;
    }

}
