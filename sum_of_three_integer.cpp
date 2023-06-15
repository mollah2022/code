#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k,s,sum=0,count=0;
	cin >> k >> s;

	for(int i=0;i<=k;i++)
	{
          for(int j=0;j<=k;j++)
          {
          	
          	  if( s-i-j>=0 && s-i-j<=k)
          	  {
          	  	
          			count++;
          		}
          	  
          }
	}

	cout << count << endl;
	count = 0;
	return 0;
}