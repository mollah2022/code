#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;

	cin >> x >> y;

	int *ptr1,*ptr2,*ptr3;

	ptr1 = &x;
	ptr2 = &y;

	int sum = (*ptr1+*ptr2);

	cout << x << endl;
	cout << ptr1 <<endl;
	cout << y << endl;
	cout << ptr2 << endl;
	cout << sum << endl;

	ptr3 = &sum;

	cout << ptr3 << endl;
	cout << *ptr3 << endl;
	return 0;
}