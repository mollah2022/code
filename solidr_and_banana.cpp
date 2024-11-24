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
           int n,m,k; cin >> n >> m >> k;
           ll sumAmount = 0;

           for( int i = 1; i <=k; i++ ){
              sumAmount+=(i*n);
           }
           if( sumAmount > m ){
              cout << sumAmount-m << endl;
           }
           else{
              cout << 0 << endl;
           }
  return 0;
}