#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int n,x,y; cin >> n >> x >> y;
	long long int a1[n];
	for(int i=0; i<n; i++)
	{
		cin >> a1[i];
	}
	long long int mn=a1[0];
	for(int i=0; i<n; i++)
	{
		if(a1[i]<mn)
		{
			mn = a1[i];
		}
	}
  if(mn <= x)
  {
  	  cout << (x-y)+mn << endl;
  }
  else
  {
  	 cout << x << endl;
  }
  return 0;
}