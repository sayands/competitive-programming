#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x=0,y=0,count=0;
	string s;
	cin>>n;
	cin>>s;

	for(int i=0;i<n;i++)
	{
		if(s[i] == 'R')
			x++;
		if(s[i] == 'U')
			y++;
		if(s[i] == s[i+1] && x==y)
			count++;
	}
	cout<<count;
	return 0;

}