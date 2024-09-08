//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
              int n,k,m; cin >>  n >> k >> m;
              int a1[n];
              int sum = 0;
              for(int i=0;i<n-1;i++){
                      cin >> a1[i];
                      if(a1[i]<=k){
                           sum += a1[i];
                      }
              }
              int ans = (m*n-sum);
                 if(ans<0){
                       cout << 0 << endl;
                 }
                 else if(ans >k){
                       cout <<"-1\n";
                 }
                 else{
                       cout << ans << endl;
                 }
  return 0;
}