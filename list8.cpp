#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	list < int > li;

	int x,y;
	cin >> x;

	for(int i=0;i<x;i++)
	{
		cin >> y;
		li.push_back(y);
	}

	for(auto it : li)
	{
		cout << it <<" ";
	}
	cout << endl;

	list < int > :: iterator it,it1;

	it = li.begin();
	it1 = li.begin();
	advance(it,1);
	advance(it1,4);
	li.erase(it,it1);

	for(auto it : li)
	{
		 cout << it << " ";
	}
	cout << endl;
	return 0;
}