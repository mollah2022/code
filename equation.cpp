#include<bits/stdc++.h>
using namespace std;

long long int ans(int x,int y)
{
	long long int sum=0,i,p;
	int a=x;
	int b=y;
    for( i=2;i<=b;i=i+2)
    {
    	p=pow(a,i);
    	sum+=p;
    }
    return sum;
}

int32_t main()
{
	int x,y;
	cin >> x >> y;
	cout<<ans(x,y)<<endl;
	return 0;
}