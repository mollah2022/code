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
	cout<<"Given value\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.insert(v1.begin()+4,3,100);
	cout<<"After insert value\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	cout<<"insert successfull sajib\n";
	return 0;
}