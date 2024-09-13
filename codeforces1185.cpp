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
                      int n,m; cin >> n >> m;
                      if(n==1){
                           n = n+1;
                      }
                      for(int i=n;i<=m;i++){
                        int find = 0;
                            for(int j=2;j<=sqrt(i);j++){
                                   if(i%j==0){
                                    find = 1;
                                       break;
                                   }
                            }
                            if(find==0){
                                   cout << i << endl;
                            }
                      }
                      cout << endl;
              }
  return 0;
}