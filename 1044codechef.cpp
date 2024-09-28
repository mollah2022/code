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
                    int n ; cin >> n ;

                    vector < int > v1 ;

                    for ( int i = 1 ; i <= n ; i++ ){
                         v1.push_back(i);
                    }

                    int paircount = 0;

                    for ( int i = 0 ; i < v1.size() ; i++ ){
                          for ( int j = 0 ; j < v1.size() ; j++ ){
                            int find = ( v1[i]+v1[j] ) ;
                               if( find%2 != 0 ){
                                   paircount++ ;
                               }
                          }
                    }
                    cout << paircount << endl;
             }
  return 0;
}