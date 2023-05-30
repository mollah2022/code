#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int a1[x+1];
	    a1[x]=-1;
	for(int i=0;i<x;i++)
	{
		cin >> a1[i];
	}
	if(x==1)
	{
		cout<<"1\n";
		return 0;
	}
	int count=0;
	int mx=-1;
	for(int i=0;i<x;i++)
	{
		if(a1[i]>mx && a1[i]>a1[i+1])
		{
           count++;
		}
	   mx=max(mx,a1[i]);
	}
     cout<<count<<endl;
     return 0;
}