#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;

	cin >> s1;
	int digit=0,number=0;
	for(int i=0;i<s1.size();i++)
	{
         number=s1[i]-'0';
         digit=(digit*10)+number;
	}
	cout<<digit<<endl;

	 string s2;
	cin >> s2;
	int number_f=0;
	number_f=stoi(s2);
	cout<<number_f<<endl;
	return 0;
}