#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int>v1;
	vector<int>v2;

	int x,y,z;
	cin >> x;
	for(int i=0;i<x;i++)
	{
		cin >> y;
		v1.push_back(y);
	}
	for(int i=0;i<x;i++)
	{
		cin >> z;
		v2.push_back(z);
	}
	cout<<"Before reverse\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<endl;

	cout<<"After reverse\n";
	reverse(v1.begin(),v1.end());
	reverse(v2.begin(),v2.end());
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<endl;
	return 0;
}