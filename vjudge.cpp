//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

const int mx = 123;
int a1[mx][mx];
int a2[mx];

int32_t main(){
           FAST()
              int n,m; cin >> n >> m;
              for(int i=0;i<n;i++){
                   for(int j=0;j<m;j++){
                        cin >> a1[i][j];
                   }
              }
             for(int i=0;i<4;i++){
                    cin >> a2[i];
             }
              for(int i=0;i<n;i++){
                int sum = 0;
                   for(int j=0;j<m;j++){
                         sum = sum +(a1[i][j]*a2[j]);
                   }
                   cout << sum << endl;
              }
  return 0;
}