#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	vector < int > v1;
	for(int i=0;i<n; i++){
		int y; cin >> y;
		v1.push_back(y);
	}
	for(int i=0;i<n;i++){
		int mini = i;
		for(int j=i+1;j<n;j++){
			if(v1[j]<v1[mini]){
				mini = j;
			}
		}
		if(mini!=i){
			int temp = v1[i];
			v1[i] = v1[mini];
			v1[mini] = temp;
		}
	}
	for(int i=0;i<n;i++){
		cout << v1[i] <<" ";
	}
	cout << endl;
	return 0;
}