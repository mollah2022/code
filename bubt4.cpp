//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
              tst{
                     int n; cin >> n;
                     int a1[n];
                     for(int i=0;i<n;i++){
                            cin >> a1[i] ;
                     }
                     int count = 0;
                     for(int i=0;i<n;i++){
                          int ans = sqrt(a1[i]);
                          if((ans*ans)==a1[i]){
                               count++;
                          }
                     }
                     cout << n- count << endl;
              }
  return 0;
}