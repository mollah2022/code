#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;

	s1.pop_back();
	cout<<s1<<endl;
	s1.push_back('h');
	cout<<s1<<endl;

	for(int i=0;i<2;i++)
	{
		char ch;
		cin >> ch;
		s1.push_back(ch);
	}
	cout<<s1<<endl;
	for(int i=0;i<2;i++)
	{
		s1.pop_back();
	}
	cout<<s1<<endl;
   return 0;
}