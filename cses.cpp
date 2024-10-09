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
               ll n; cin >> n;

               if( n == 1 ){

                  cout << 1 << endl;
                  
                  return 0;
               }

               cout << n << " ";

               while( n > 1 ){
                  
                    if( n%2!=0 ){

                          n = ((3*n)+1);

                          cout << n << " ";
                    }
                    else if(n%2==0){
                        
                         n = (n/2);

                        cout << n << " ";
                    }

               }


  return 0;
}