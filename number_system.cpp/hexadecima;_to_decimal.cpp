#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int hexa_to_decimal(string x)
{
	int sum=0;
	int a=1,b;
	b=x.size();
	for(int i=b-1;i>=0;i--)
	{
		if(x[i]>='0' && x[i]<='9')
		{
			sum+=a*(x[i]-'0');
		}
		else if(x[i]>='A' && x[i]<='F')
		{
			sum+=a*(x[i]-'A'+10);
		}
		a=a*16;
	}
	return sum;
}

int32_t main()
{
	string x;
	cin >> x;
	cout<<hexa_to_decimal(x);
	return 0;
}