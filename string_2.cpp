#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	getline(cin,s1);
	cout<<s1<<endl;
	cout<<s1.size()<<endl;
	sort(s1.begin(),s1.end());
	cout<<s1<<endl;
	reverse(s1.begin(),s1.end());
	cout<<s1<<endl;
	string s2;
	s2=s1.substr(7,9);
	cout<<s2<<endl;
	return 0;
}