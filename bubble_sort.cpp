#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,temp=0; cin >> x;
	int a1[x];
	for(int i = 0; i < x; i++)
	{
		cin >> a1[i];
	}

	for(int i = 0; i < x-1; i++)
	{
		for(int j = 0; j < x-1-i; j++)
		{
			if(a1[j] > a1[j+1])
			{
				 temp = a1[j];
				a1[j] = a1[j+1];
				a1[j+1] = temp;
			}
		}
	}

	for(int i = 0; i < x; i++)
	{
		cout << a1[i] << " ";
	}

	return 0;
}