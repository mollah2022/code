#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	list < int > li;
	list < int > li1;

	int x,y,z,p;
	cin >> x ;
	for(int i=0;i<x;i++)
	{
		cin >> y;
		li.push_back(y);
	}
      
      cin >> p;
	for(int j=0;j<p;j++)
	{
		cin >> z;
		li1.push_back(z);
	}

	for(auto it : li)

	{
		cout << it << " ";
	}
	cout << endl;

	for(auto it : li1)

	{
		cout << it << " ";
	}
	cout << endl;

	li.swap(li1);

	
	for(auto it : li)

	{
		cout << it << " ";
	}
	cout << endl;

	for(auto it : li1)

	{
		cout << it << " ";
	}
	cout << endl;

	return 0;
}