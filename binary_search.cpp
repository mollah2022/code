#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,mid=0; cin >> x;

	int a1[x];
	for(int i = 0; i < x; i++)
	{
		cin >> a1[i];
	}

	int y,left=0,right=x-1; cin >> y;
     while(left <= right)
     {
          mid = (left+right)/2;

          if(a1[mid] == y)
          {
          	 cout << mid << endl;
          	 return 0;
          }
          else if (a1[mid]<y)
          {
                left = mid +1;
          }
          else
          {
          	  right = mid -1;
          }
     }

     cout << -1 <<endl;

     return 0;
}