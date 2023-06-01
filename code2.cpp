#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--)
	{
		int x,y,z;
		cin >> x >> y >> z;

		if(x==1 && y==1 || x==1 && z==1 || y==1 && z==1 || x==1 && y==1 && z==1)
		{
			cout<<"Not now\n";
		}
		else
		{
			cout<<"Water filling time\n";
		}
	}
	return 0;
}