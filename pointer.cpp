#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;

	int *ptr1,*ptr2;

	ptr1 = &x;
	ptr2 = &y;
  cout<< *ptr1 << " " << *ptr2 << "\n";
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	cout << *ptr1 <<" " << *ptr2 << "\n";
	return 0;
}