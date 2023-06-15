#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int t;
	while(t--)
	{
		int x1,x2,x3,b;
		cin >> x1 >> x2 >> x3;

		int a = min(min(x1,x2),x3);

	    if(a!=x1 && (x1<x2 || x1 <x3))
	    {
	    	cout << x1 << " ";
	    }
	    else if(a!=x2 && (x2<x1 || x2 <x3))
	    {
	    	cout << x2 << " ";
	    }
	    else
	    {
	    	cout << x3 << " ";
	    }
	}
  return 0;
}