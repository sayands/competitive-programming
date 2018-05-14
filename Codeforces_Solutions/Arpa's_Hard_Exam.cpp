// 742A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int o[] = {6, 8, 4, 2};
    cout << ((n == 0) ? 1 : o[n % 4]);
    return 0;
}