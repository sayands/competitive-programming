#include <bits/stdc++.h>
using namespace std;
const unsigned long  long int MAX_SIZE =  320000000;

vector <long long>isPrime(MAX_SIZE,true);
vector <unsigned long  long int>prime;
vector <unsigned long  long int>SPF(MAX_SIZE);

void manipulated_seive(unsigned long int M,unsigned long  long int N)
{
    isPrime[0]=isPrime[1]=false;

    for(unsigned long long int i=2;i<=N;i++)
    {
        if(isPrime[i])
        {
            prime.push_back(i);
            SPF[i]=i;
        }

        for(unsigned  long long int j=0;j<prime.size() && i*prime[j]<=N && prime[j]<=SPF[i];j++)
        {
            isPrime[i*prime[j]] = false;
            SPF[i*prime[j]]=prime[j];
        }
    }
    for(unsigned long long int i=0;i<prime.size() && prime[i]<=N;i++)
    {
        if(prime[i]>=M)
            cout<<prime[i]<<endl;
    }

    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int length = n*2;
    unsigned  long long int a[length];
    for(int i=0;i<length;i++)
        cin>>a[i];
    for(int i=0;i<length;i+=2)
    {
        manipulated_seive(a[i],a[i+1]);
        prime={0};
        isPrime={true};
        SPF={0};
    }
}

