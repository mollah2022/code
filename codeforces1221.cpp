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

                 int m = n;

                 int sumValue  = n*(n+1)/2;

                // cout << sumValue << endl;

                for( int i = 1; i <= n; i++ ){

                      if( sumValue % 2 == 0 ){
                          break;
                      }
                      else{
                            sumValue -= i;
                            m = m - 1;
                      }
                }

                cout << m << endl;

           }
  return 0;
}