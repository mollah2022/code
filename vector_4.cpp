#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int>v1;
	int x,y;
	cin >> x;
	for(int i=0;i<x;i++)
	{
		cin >> y;
		v1.push_back(y);
	}

	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
    
    v1.pop_back();

	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	v1.pop_back();
		for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;    

	return 0;
}