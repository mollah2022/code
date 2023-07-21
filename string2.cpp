#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	int rem = 0;
	string s1;
	char ch;
	while(x>0)
	{
		rem = x%10;
		s1+=rem+'0';
		x/=10;
	}
	reverse(s1.begin(),s1.end());
	cout << s1 << endl;
    
    long long int p; cin >> p;
    string s2 = to_string(p);
    cout << s2 << endl;

	return 0;
}