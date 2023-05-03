#include<bits/stdc++.h>
#include <algorithm>
#include <initializer_list>
#include<math.h>
using namespace std;
bool triplate(int x,int y,int z)
{
	int a,b,c;
	a=max(x,max(y,z));
	if(a==x)
	{
         b=y;
         c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else
	{
		b=x;
		c=y;
	}
	if(a*a==((b*b)+(c*c)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x,y,z;
	cin >> x >> y >> z;
	cout<<triplate(x,y,z);
	return 0;
}