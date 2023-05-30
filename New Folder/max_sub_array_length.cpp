#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x;
	cin >> x;

	int a1[x];
	for(int i=0;i<x;i++)
	{
		cin >> a1[i];
	}

	int ans=2;
	int pd=a1[1]-a1[0];
	int j=2;
	int count=2;
	while(j<x)
	{
		if(pd==a1[j]-a1[j-1])
		{
               count++;
		}
		else
		{
			pd=a1[j]-a1[j-1];
			count=2;
		}
		ans=max(ans,count);
		j++;
	}
	cout << ans << endl;
	return 0;
}