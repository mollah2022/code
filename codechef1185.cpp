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
               int a1[n];
               bool find = false;
               int ans = 0;
               for( int i = 0; i < n; i++ ){
                    cin >> a1[i];
                    ans +=a1[i];
                    if( a1[i] > m ){
                        find = true;
                    }
               }
               if( find == true ){
                  cout <<"-1\n";
                  continue;
               }
               if( ans <= m ){
                   cout << 1 << endl;
                   continue;
               }

               int cntValue = 0;
               int sumAll = 0;

               for( int i = 0; i < n; i++ ){

                     if( sumAll < m ){
                          sumAll+=a1[i];
                          if( sumAll == m ){
                              cntValue++;
                              sumAll = 0;
                          }
                          else if( sumAll > m ){
                               cntValue++;
                               sumAll = 0;
                               i = i - 1;
                          }
                     }

               }
               if( sumAll < m && sumAll!=0 ){
                  cntValue++;
               }
               cout << cntValue << endl;
           }
  return 0;
}