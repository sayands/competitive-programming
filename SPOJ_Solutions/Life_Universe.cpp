#include <iostream>
using namespace std;

int main()
{
  int n;
  while(1)
  {
    cin>>n;
    if(n>100)
       continue;
    if(n==42)
        break;
    cout<<n<<endl;
  }
}
