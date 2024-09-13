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
                      int n,m,l; cin >> n >> m >> l;
                      int a1[n];
                      int a2[m];
                      for(int i=0;i<n;i++){
                           cin >> a1[i];
                      }

                      for(int i=0;i<m;i++){
                           cin >> a2[i];
                      }
                      int cnt  = 0;
                    for(int i=0;i<n;i++){
                           for(int j=0;j<m;j++){
                                int a = a1[i]+a2[j];
                                if(a<=l){
                                      cnt++;
                                }
                           }
                    }
                    cout << cnt << endl;
               }
  return 0;
}