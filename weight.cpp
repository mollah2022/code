//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
             tst{
                     int n,m,a,b; cin >> n >> m >> a >> b;
                     if(n==a || n==m || n==b){
                            cout << "YES\n";
                            continue;
                     }
                     if((m+a)==n || (m+b)==n || (a+b)==n ){
                           cout << "YES\n";
                     }
                     else if ((m+a+b)==n){
                                  cout <<"YES\n";
                     }
                     else{
                            cout <<"NO\n";
                     }
             }
  return 0;
}