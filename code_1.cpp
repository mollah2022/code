#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,y;
	cin >> x >> y;

	int sum1=(x+y)+(x*y);

	if(sum1==111)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	return 0;
}