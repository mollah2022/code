#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	deque < int > dq;
	int x,y;
	cin >> x;

	for(int i=0;i<x;i++)
	{
		cin >> y;
		dq.push_back(y);
	}

	for(int i=0;i<dq.size();i++)
	{
		cout << dq[i] << " ";
	}

	cout << endl;

	int z;

	for(int i=0;i<x;i++)
	{
		cin >> z;
		dq.push_front(z);
	}
  
  for(int i=0;i<dq.size();i++)
  {
  	  cout << dq[i] << " ";
  }
  cout << endl;
  
	return 0;
}