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
           int n,m; cin >> n >> m;
           int a1[n];
           for( int i = 0; i < n; i++ ) cin >> a1[i];

            int store = 0;

            for( int i = 0; i < n; i++ ){
                if( i== (m-1) ){
                    store = a1[i];
                }
            }

           int cntValue = 0;

           for( int i = 0; i < n; i++ ){
                if( a1[i]!=0 && a1[i] >= store ){
                    cntValue++;
                }
            }

            cout << cntValue << endl;


  return 0;
}