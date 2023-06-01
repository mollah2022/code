#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,sum=0,found=0;
	cin >> t;
	while(t--)
	{
		int x,y;
		cin >> x >> y;
		int d=(x*y);
		for(int i=1;i<x;i++)
		{
           sum=(i+y+i+y);
           if(sum%4!=0 && sum <= d)
           {
           	  found=1;
           }
		}
		if(found==1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		found=0;
	}
	return 0;
}