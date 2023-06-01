#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;

	for(int i=0;i<s1.size();i++)
	{
		char ch;
		ch=toupper(s1[i]);
		cout<<ch;
	}
   return 0;
}