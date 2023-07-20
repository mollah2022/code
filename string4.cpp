#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	getline(cin,s1);
	cout << s1 << endl;
	string s2;
	istringstream iss(s1);
	while(iss>>s2)
	{
		cout << s2 << endl;
	}
      return 0;
}