#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y; cin >> x >> y;

	int ans = 0;

	ans = (x^y);
	cout << ans << endl;

	return 0;
}