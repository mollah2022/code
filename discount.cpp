#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;
	double z = 100- ((double)y*100/x);
	cout<< setprecision(20) << z << endl;

	return 0;
}