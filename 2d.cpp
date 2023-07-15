#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;

	int a1[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin >> a1[i][j];
		}
	}

	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout << a1[i][j] << " "  ;
		}

		cout << "\n";
	}

	return 0;
}