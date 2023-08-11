#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int ans = 0;
	ans = 1 << 3;
	//cout << ans << endl;
	if((ans&n)!=0)
	{
		cout << "set\n";
	}
	else
	{
		cout << "not\n";
	}
	//cout << (ans&n) << endl;
	return 0;
}