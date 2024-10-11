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

              if( n == 2 || n == 3 ){
                   cout << "NO SOLUTION\n";
                   return 0;
              }

            for( int i = 2; i <= n; i=i+2 ){
                   cout << i << " ";
            }

            for( int i = 1; i <= n; i=i+2 ){
                   cout << i << " ";
            }

            cout << endl;

  return 0;
}