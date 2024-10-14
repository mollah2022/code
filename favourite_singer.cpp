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

                  ll n; cin >> n;

                  ll a1[n];

                  for( ll i = 0; i < n; i++ ) cin >> a1[i];

                    sort( a1, a1+n );

                    ll mx = 0, cnt = 1;

                 for( ll i = 0; i < n-1; i++ ){
                     
                     if( a1[i] == a1[i+1] ){

                          cnt++;
                     }
                     else{

                           mx = max( mx,cnt );

                           cnt = 1;
                     }
           }

           cout << max(mx,cnt) << endl;

  return 0;
}