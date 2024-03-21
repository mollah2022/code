//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

void solve(int n){
      if(n==0){
         return;
      }
      cout << n <<" ";
       solve(n-1);
}

int32_t main(){
           FAST
            int n; cin >> n;
            solve(n);
  return 0;
}