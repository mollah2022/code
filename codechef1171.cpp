//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

const int mx = 1003;
int a2[mx];
 
int32_t main(){
    
           FAST
           tst{
               int n; cin >> n;
               int a1[n];
               for( int i = 0; i < n; i++ ) cin >> a1[i];

                int mx1 = 0;
               
               for( int i = 0; i < n; i++ ){
                  a2[a1[i]]++;
                  if( mx1 < a2[a1[i]] ){
                    mx1 = a2[a1[i]];
                  }
               }

               int cnt = 0;

               for( int i = 0; i < mx; i++ ){
                  if( a2[i] == mx1 ){
                    cnt++;
                  }
               }

               if( cnt > 1 ) cout <<"NO\n";
               else cout << "YES\n";
           }
  return 0;
}