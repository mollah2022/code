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

               for( int i = 0; i < n; i++ ) cin >> a1[i];

                int atLast = 0;
                int atMost = 0;

                for( int i = 0; i < n; i++ ){
                    
                     if( m/10 >= a1[i] ){
                          atMost++;
                        }
                    if( m/2 <= a1[i] ){
                        atLast++;
                    }
                }
         //  cout << atMost <<" "<<atLast<<endl;
                if( atLast == 1 && atMost == 2 ){
                    cout <<"yes\n";
                }
                else{
                    cout <<"no\n";
                }
           }
  return 0;
}