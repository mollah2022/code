#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for(int i=0;i<x;i++)
	{
		int count=0;
		for(int j=i;j<x;j++)
		{
			count+=s1[j];
			cout<<count<<" "<<s1[j]<<" "<<endl;
		}
	}
	return 0;
}