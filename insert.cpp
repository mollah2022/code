#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int x; cin >> x;
    int a1[x];
   // srand(time(0));
    for(int i = 0; i < x; i++)
    {
    	cin >> a1[i];
    }
   
   for( int i = 0; i < x; i++)
   {
   	     cout << a1[i] << " ";
   }
    cout << "\n";
   int position,item,j=x-1; cin >> position >> item;
   while(j >= position)
   {
   	   a1[j+1] = a1[j];
   	   j--;
   }

   a1[position] = item;
        x = x+1;
   for(int i = 0; i < x; i++)
   {
   	   cout << a1[i] << " ";
   }

   cout << " DELETE VALUE : \n";

   int p; cin >> p;
   for(int k = p; p < x; k++)
   {
   	     a1[k] = a1[k+1];
   }
   for(int i = 0 ; i < 5; i++)
   {
   	     cout << a1[i] << " ";
   }
   return 0;
}