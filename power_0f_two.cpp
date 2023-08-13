#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int n; cin >> n;
	int count = 0;
	while(n!=0)
	{
		if((n&1)!=0)
		{
			count++;
		}
		n = n >> 1;
	}
	if(count == 1)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}