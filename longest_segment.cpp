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

           int n; cin >> n;

           int x[n], y[n];

           for( int i = 0; i < n; i++ ){
                 cin >> x[i] >> y[i];
           }
             
             double mx = 0;

           for ( int i = 0; i < n; i++ ){
               for ( int j = 0; j < n; j++ ){

                     int x1 = x[i];
                     int y1 = y[i];
                     int x2 = x[j];
                     int y2 = y[j];

                     int isvalue1 = ( ( x1 - x2 ) * ( x1 - x2 ) );
                     int isvalue2 = ( ( y1 - y2 ) * ( y1 - y2 ) );

                    // cout << isvalue1 <<" " << isvalue2 << endl;

                     double isvalue = sqrt( isvalue1 + isvalue2 );

                     if( mx < isvalue ){
                          mx = isvalue;
                     }
               }
           }

           cout << fixed << setprecision(10) << mx << endl;

  return 0;
}