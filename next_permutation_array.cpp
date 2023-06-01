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

	sort(s1,s1+x);
	for(int i=0;i<x;i++)
	{
		cout<<s1[i]<<" ";
	}
	cout<<endl;

	while(next_permutation(s1,s1+x))
	{
		cout<<s1[0]<<" "<<s1[1]<<" "<<s1[2]<<" ";
		
		cout<<endl;
	}
	return 0;
}