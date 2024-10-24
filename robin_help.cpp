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

                for( int i = 0; i < n; i++ ){
                      cin >> a1[i];
                }

               int sumValue = 0;
               int cntValue = 0;

               for( int i = 0; i < n; i++ ){
                   if( a1[i] == 0){
                    cntValue++;
                   }
                   else if(a1[i]>=m){
                      sumValue+=a1[i];
                   }
               }
               if(a1[0]==0){
                     cntValue -=1;
               }
               if( cntValue >= sumValue ){
                  cout << sumValue << endl;
               }
               else{
                     cout << cntValue << endl;
               }
           }
  return 0;
}