#include<bits/stdc++.h>
using namespace std;

int decimal_to_octal(int x)
{
	int sum=0;
	int a=1,b;
	while(a<=x)
		a*=8;
		a/=8;	
	while(a>0)
		{
			int last_digit = x/a;
			x-=last_digit*a;
			a/=8;
			sum = sum*10+last_digit;

		}
	return sum;
}

int32_t main()
{
	int x;
	cin >> x;
	cout<<decimal_to_octal(x);
	return 0;
}