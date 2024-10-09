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
                    int n,m,k; cin >> n >> m >> k;
                    int a,b; cin >> a >> b;

                    int mx = (n/2);
                int totalProfit = 0;
                    if ( a > b ){
                        
                        if( m >= mx ){
                          totalProfit +=(mx*a);
                        }
                        else{
                            totalProfit +=(m*a);
                            mx = mx - m;
                             if( k >= mx ){
                                totalProfit +=(mx*b);
                             }
                             else{
                                totalProfit +=(k*b);
                             }
                        }

                    }
                    else{
                           if( k >= mx ){
                               totalProfit +=(mx*b);
                           }
                           else{
                              totalProfit +=(k*b);
                              mx = mx -k;

                              if( m >= mx ){
                                totalProfit +=(mx*a);
                              }
                              else{
                                totalProfit +=(m*a);
                              }
                           }
                    }

                    cout << totalProfit << endl;
             }
  return 0;
}