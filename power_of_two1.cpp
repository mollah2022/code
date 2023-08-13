#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int n; cin >> n;
	if((n &(n-1)) == 0)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}