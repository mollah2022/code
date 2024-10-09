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

           vector < ll > v1;

           for( int i = 0; i < n; i++){
                  v1.push_back(i+1);
             }

           n = n - 1;

           int a1[n];

           for( int i = 0; i < n ; i++)  cin >> a1[i];

            sort( a1,a1+n );

            int findValue = 0;

            for( int i = 0; i < v1.size(); i++ ){
                  if( v1[i] != a1[i] ){
                       cout << v1[i] << endl;
                       break;
                  }
            }


  return 0;
}