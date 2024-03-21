//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int solve(int n){
       if(n<=1){
          return n;
       }
       else{
          return solve(n-1)+solve(n-2);
       }
}

void solvefibo(int n){
      for(int i=0;i<n;i++){
          cout << solve(i) <<" ";
      }
      cout << endl;
}


int32_t main(){
           FAST
            int n; cin >> n;
            solvefibo(n);
  return 0;
}