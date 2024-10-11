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

                   for( int i = 0; i < n; i++ ){
                       for( int j = 0 ; j < m; j++ ){
                            if( i==j ){
                                  cout << 3 <<" ";
                            }
                            else{
                                cout << 2 << " ";
                            }
                       }
                       cout << endl;
                   }
             }
  return 0;
}