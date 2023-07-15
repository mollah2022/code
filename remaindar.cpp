#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y,z; cin >> x >> y >> z;
		long long ans = 0;
		ans = z - z % x + y;
		if(ans <= z)
		{
			cout << ans << endl;
		}
		else
		{
			cout << z - z % x - (x-y)<<"\n";
		}
	}
	return 0;
}