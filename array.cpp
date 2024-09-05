#include<bits/stdc++.h>
using namespace std;
const int mx = 100023;
int a1[mx];
int main(){
              int n; cin >> n;
              int a2[n];
              for(int i=1 ; i<=n ; i++){
                     cin >> a2[i];
              }
              for(int i=1;i<=n;i++){
                        a1[a2[i]]++;
               }
              int m; cin >> m;
              while(m--){
                    int val; cin >> val;
                   cout << a1[val] << endl;
               }
   return 0;
}
