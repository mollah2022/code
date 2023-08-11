#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int ans = 0;
	ans = n >> 4;
	if((ans&1)!=0)
	{
		cout << "set\n";
	}
	else
	{
		cout << "not\n";
	}
	return 0;
}