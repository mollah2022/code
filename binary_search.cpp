#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	vector<int>v1;
	for(int i=0;i<n;i++){
		int y; cin >> y;
		v1.push_back(y);
	}
	int frist = 0, last = n-1;
	int mid = 0,found = 0;
	int k; cin >> k;
	bool sajib = false;
	while(frist<=last){
		mid = (frist+last)/2;
		if(v1[mid]==k){
			found = mid;
		cout << mid << endl;
			return 0;
		}
		else if(v1[mid]<k){
			frist = mid+1;
		}
		else{
			last = mid-1;
		}
	}
		cout << -1 << endl;
	return 0;
}