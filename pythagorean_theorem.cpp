//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

const int mx = 2e8+12;
bool isSquare[mx];
 
int32_t main(){
    
           FAST

             int n; cin >> n;

             for ( int i = 1; i <= n; i++ ){
                isSquare[i*i] = 1;
             }

             int cnt = 0;

             for( int i = 1; i <= n; i++){
                  for( int j = i; j <= n; j++){
                      int isvalue = ( i*i ) + ( j*j );

                      if( isSquare[isvalue] ){
                           cnt++;
                      }
                  }
             }

             cout << cnt << endl;

  return 0;
}