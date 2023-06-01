#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,mx=0,found=0;
	cin >> t;
	while(t--)
	{
		int n,k,l;
		cin >> n >> k >> l;
		while(n--)
		{
			int x,y;
			cin >> x >> y;
			if(l==y)
			{
				mx=max(mx,x);
				found=1;
			}
		}
		if(found==1)
		{
			cout<<mx<<endl;
		}
		else
		{
			cout<<"-1\n";
		}
		mx=0;
	}
	return 0;
}