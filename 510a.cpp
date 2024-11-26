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

           for( int i = 1; i <= n; i++ ){
              for( int j = 1; j <= m; j++ ){
                   if( i % 2 != 0 ){
                      cout <<"#";
                   }
                   else if( i % 2 == 0 ){
                        if( i % 4 == 0 ){
                            if( j==1 ){
                                 cout <<"#";
                            }
                            else{
                                cout <<".";
                            }
                        }
                        else{
                            if( j==m ){
                                 cout <<"#";
                            }
                            else{
                                cout <<".";
                            }
                        }
                   }
              }
              cout << endl;
           }
  return 0;
}