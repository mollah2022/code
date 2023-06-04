#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

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
		cout << it << " ";
	}
    cout<<endl;

    cout << li.size() << endl;

    li.pop_back();
    li.pop_front();

    cout << li.size() << endl;

	return 0;
}