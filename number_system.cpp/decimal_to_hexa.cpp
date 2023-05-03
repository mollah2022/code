#include<bits/stdc++.h>
using namespace std;
string decimal_to_hexa(int x)
{
	int a=1;
	string ans = "";
	while(a<=x)
		a*=16;
		a/=16;
		while(a>0)
		{
			int last_digit = x/a;
			x-=last_digit*a;
			a/=16;
			if(last_digit <= 9)
			{
				ans = ans + to_string(last_digit);
			}
			else
			{
				char c = 'A'+last_digit-10;
				ans.push_back(c);
			}
		}
		return ans;
	
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	cout<<decimal_to_hexa(x);
	return 0;
}