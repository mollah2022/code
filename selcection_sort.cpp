#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	int a1[x];

	for(int i = 0; i < x; i++)
	{
		cin >> a1[i];
	}

	for(int i = 0; i < x-1; i++)
	{
         int mini = i;

         for(int j = i+1; j < x; j++)
         {
         	   if(a1[j] < a1[mini])
         	   {
         	   	    mini = j;
         	   }
         }

         if(mini != i)
         {
         	int temp = a1[i];
         	a1[i] = a1[mini];
         	a1[mini] = temp;
         }
	}

	for(int i = 0; i < x; i++)
	{
		cout << a1[i] << " ";
	}

	return 0;
}