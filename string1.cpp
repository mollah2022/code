#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1; cin >> s1;
	cout << s1.size() << endl;
	sort(s1.begin(),s1.end());
	cout << s1 << endl;
	reverse(s1.begin(),s1.end());
	cout << s1 << endl;
	string ans = s1.substr(0,3);
	cout << ans << endl;
	string s2;
	getline(cin,s2);
	cout << s2 << endl;
  return 0;
}