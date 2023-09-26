#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	list < string > li;
	string s1; cin >> s1;
	li.push_back(s1);
	cout << s1 << endl;
	sort(s1.begin(),s1.end());
	reverse(s1.begin(),s1.end());
	cout << s1 << endl;
	return 0;
}