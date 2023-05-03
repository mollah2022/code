#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int x)
{
	int sum=0;
	int a=1,b;
	while(a<=x)
		a*=2;
		a/=2;	
	while(a>0)
		{
			int last_digit = x/a;
			x-=last_digit*a;
			a/=2;
			sum = sum*10+last_digit;

		}
	return sum;
}

int32_t main()
{
	int x;
	cin >> x;
	cout<<decimal_to_binary(x);
	return 0;
}