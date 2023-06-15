#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int x,y,z;
	cin >> x >> y >> z;
	if((x*x)+(y*y)<(z*z))
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}
	return 0;
}