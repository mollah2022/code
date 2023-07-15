#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a1[n];
    srand(time(0));
	for(int i = 0; i < n; i++)
	{
		a1[i] = rand()%50;
	}

	for(int i = 0; i < n; i++)
	{
		cout << a1[i] << " ";
	}

	cout << endl;

	int position,item; cin >> position >> item;

	int j = n-1;
	while(j >= position)
	{
		a1[j+1] = a1[j];
		j--;
	}
      a1[position] = item;

      n = n+1;

   for (int i = 0; i < n; i++)
   {
   	   cout << a1[i] << " ";
   }
   
   cout << endl;

   cout << "DELETE NUMBER:\n";

   int posi1; cin >> posi1;

   for(int i = posi1 ; i < n; i++)
   {
   	    a1[i] = a1 [i+1];
   }
   for (int i = 0; i < n-1; i++)
   {
   	   cout << a1[i] << " ";
   }
	return 0;
}