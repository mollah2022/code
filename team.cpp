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
           int cntValue = 0;
           
           tst{
              int n,m,k; cin >> n >> m >> k;

              if( n==1 && m==1 || n==1 && k==1 || m==1 && k==1 ){
                cntValue++;
              }
           }
           cout << cntValue << endl;
  return 0;
}