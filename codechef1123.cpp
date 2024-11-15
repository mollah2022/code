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

               int mx = 1000005;
                    int a2[mx];

                for( int i = 0; i < mx; i++ ) {a2[i] = 0;}

              for( int i = 0; i < n; i++ ) {cin >> a1[i];}

                int mx1 = 0;

              for( int i = 0; i < n; i++ ){
                  a2[a1[i]]++;
                  if( a2[a1[i]] > mx1 ){
                    mx1 = a2[a1[i]];
                  }
              }

              cout << n-mx1 << endl;

           }
  return 0;
}