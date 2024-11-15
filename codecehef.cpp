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
                int a1[n];

                for( int i = 0; i < n; i++ ) cin >> a1[i];

                   int ans =  *max_element(a1, a1 + n);

               if( ans > n ){
                   cout << "-1\n";
                   continue;
               }

               int cnt = 0;
                 
                int ran = n;
               for( int i = 0; i < n; i++ ){
                   if( a1[i] == n ){
                      cnt++;
                   }
               }

               if( cnt > 1 ){
                  cout << "-1" << endl;
                  continue;
               }

               sort(a1,a1+n);
               int sumValue = 0;

               for( int i = n-1; i > 0; i-- ){
                   if(ran >= a1[i]){
                            int ans = ran - a1[i];
                  a1[i] = a1[i]+ans;
                  sumValue+=ans;
                  ans = 0;
                  ran--;
                   }
                   else{
                    break;
                   }
               }

               if(a1[0]>1){
                  cout << "-1" << endl;
                  continue;
               }

               bool find = false;

               for( int i = 0; i < n-1; i++ ){
                   if(a1[i]>=a1[i+1]){
                      find = true;
                      break;
                   }
               }

               if( find == true){
                  cout <<"-1\n";
               }
               else{
                             if(a1[0]==0){
                  cout << sumValue+1 << endl;
               }
               else{
                  cout << sumValue << endl;
               }
         }

           }
  return 0;
}