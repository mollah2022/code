#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	int x; cin >> x;

	int a1[x];
	for(int i = 0; i < x; i++)
	{
         cin >> a1[i];
	}

	for(int i = 1; i < x; i++)
	{
		int j = i-1;
		int temp = a1[i];

		while(j>=0 && a1[j]>temp)
		{
			a1[j+1] = a1[j];
			j--;
		}
		 a1[j+1] = temp;
	}

	for(int i = 0; i < x; i++)
	{
		cout << a1[i] << " ";
	}

	return 0;
}