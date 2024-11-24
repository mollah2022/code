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
           while(true){
              int n,m; cin >> n >> m;
              if( n==0 && m==0 ){
                break;
              }
              else{
                       if( n<m ) cout << n <<" "<<m << endl;
                       else cout << m <<" "<<n << endl;

              }
           }
  return 0;
}