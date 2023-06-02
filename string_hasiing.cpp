#include<bits/stdc++.h>
using namespace std;

int string_hasing(string s1)
{
	int ans=0;
	int prime=2;
	int power=1;
	for(int i=0;i<s1.size();i++)
	{
		ans+=s1[i]+power;
		power=power*prime;
	}
	return ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
			string s1;
	        cin >> s1;
	     int  ans= string_hasing(s1);
	     cout<<ans<<endl;
	}
  return 0;
}