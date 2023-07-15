#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,y,p=0; cin >> x >> y;

	int mn = INT_MAX;
	if(x%2==0)
	{
         p = x/y;
	}
	else
	{
		p = (x/y)+1;
	}
	int a1[x];
	for(int i=0;i<x;i++)
	{
		cin >> a1[i];
	}
	while(p--)
	{
		for(int i=0;i<y;i++)
		{
            mn = min(a1[i],mn);
            a1[i]=a1[i+1];
		}

		cout << mn <<" ";
	}
	return 0;
}