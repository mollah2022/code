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

           int a1[n];

           for( int i = 0; i < n; i++ ) cin >> a1[i];

           ll cntValue = 0;

          for ( int  i = 0; i < n-1 ; i++ ){
                if( a1[i] > a1[i+1] ){
                     int tempValue = ( a1[i] - a1[i+1] );
                     cntValue += tempValue;
                     a1[i+1] += tempValue;
                }
          }

          cout << cntValue << endl;

  return 0;
}