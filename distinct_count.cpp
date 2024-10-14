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
                      int n,m; cin >> n >> m;

                      vector < int > v1;

                      for ( int i = 0; i < n; i++ ){
                          int b; cin >> b;
                          v1.push_back(b);
                      }

                      sort(v1.begin(),v1.end());
                      int sz = unique( v1.begin(),v1.end() ) - v1.begin();

                      if( sz == m ){
                           cout << "Good\n";
                      }
                      else if( sz > m ){
                          cout << "Average\n";
                      }
                      else{
                           cout << "Bad\n";
                      }
              }
  return 0;
}