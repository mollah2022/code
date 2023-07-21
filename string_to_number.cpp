#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long int ans = 0,x;
	char ch;
	string s1; cin >> s1;
	for(int i=0; i<s1.size(); i++)
	{
         x = s1[i]-'0';
         ans = ans*10+x;
	}

	cout << ans << endl;

	string s2; cin >> s2;
	int number = stoi(s2);

	cout << number << endl;
	return 0;
}