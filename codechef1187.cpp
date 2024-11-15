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
               int x,y,n,r; cin >> x >> y >> n >> r;
               int mx = (x*n);

               if( mx > r){
                    cout << "-1\n";
                    continue;
               }
            int nowAmount = r - (x*n);
            int cnt = n;
            int cnt1 = 0;
            bool find = false;
               while(true){
                   nowAmount+=x;
                   if( nowAmount >= y ){
                      cnt1++;
                      nowAmount-=y;
                      find = true;
                          if( cnt1 == n ){
                              break;
                          }
                   }
                   else{
                      break;
                   }
               }

               if( find == false ){
                   cout << cnt << " " << cnt1 << endl;
               }
               else{
                  cout << abs( cnt1 - cnt ) << " " << cnt1 << endl;
               }
           }
  return 0;
}