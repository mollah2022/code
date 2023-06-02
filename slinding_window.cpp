#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	int ans=0;
	string s3;
	for(int i=0;i<s2.size();i++)
	{
		s3+=s1[i];
	}
	if(s3==s2)
	{
		ans++;
	}
	for(int i=s2.size();i<s1.size();i++)
	{
		s3+=s1[i];
		s3.erase(s3.begin());
		if(s3==s2)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}