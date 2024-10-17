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
               ll n,m; cin >> n >> m;

               int ran = n%2;
               int ran1 = m%2;

               if( ran == ran1 ){
                  cout <<"YES\n";
               }
               else{
                   cout <<"NO\n";
               }
           }
  return 0;
}