#include<bits/stdc++.h>
using namespace std;
int sum_of_number(int x)
{
    int sum=0,sum_1=0;
    sum=(x*(x+1))/2;
  return sum;

    for(int i=0;i<=x;i++)
    {
    	sum_1+=i;
    }
    return sum_1;
}
int32_t main()
{
	int x;
	cin >> x;
	cout<<sum_of_number(x);
	return 0;
} 