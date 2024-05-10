#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	       int n; cin >> n;
	       vector<int>v1;
	       for(int i=0;i<n;i++){
	             int y; cin >> y;
	             v1.push_back(y);
	       }
	       sort(v1.begin(),v1.end());
	       reverse(v1.begin(),v1.end());
	       int l = v1.size();
	       int sum1=0,sum2=0;
	       if(l%2!=0){
                       for(int i=0;i<=v1.size()/2;i++){
	             sum1+=v1[i];
	       }
	        for(int i=v1.size()/2+1;i<v1.size();i++){
	             sum2+=v1[i];
	       }
               cout << sum1-sum2 << endl;
               continue;
	       }
	       
	       for(int i=0;i<v1.size()/2;i++){
	             sum1+=v1[i];
	       }
	        for(int i=v1.size()/2;i<v1.size();i++){
	             sum2+=v1[i];
	       }

	       cout << sum1-sum2 << endl;
	}
  return 0;
}