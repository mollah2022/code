#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	x < 18 ? cout<<("x is child\n") : cout<<("x is Adult\n");

	int number;
	cin >> number;
	int s1[number];
	for(auto n : s1)
	{
		cout<<n<<endl;
	}
	return 0;
}