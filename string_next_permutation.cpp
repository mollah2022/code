#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;
	sort(s1.begin(),s1.end());
	cout<<s1<<endl;

	while(next_permutation(s1.begin(),s1.end()))
	{
		cout<<s1<<endl;
	}
	return 0;
}