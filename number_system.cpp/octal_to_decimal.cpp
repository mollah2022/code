#include<bits/stdc++.h>
using namespace std;

int octal_to_decimal(int x)
{
	int sum=0;
	int a=1,b;
	while(x>0)
	{
		b=x%10;
		sum+=a*b;
		a=a*8;
		x/=10;
	}
	return sum;
}

int32_t main()
{
	int x;
	cin >> x;
	cout<<octal_to_decimal(x);
	return 0;
}