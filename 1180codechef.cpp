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
                 int a2[10001];

                 for( int i = 0; i < 10001; i++ ) a2[i] = 0;
                 for( int i = 0; i < n; i++ ) cin >> a1[i];

                    for( int i = 0; i < n; i++ ){
                        a2[a1[i]]++;
                    }

                    int mx1 = 0;
                    int find = 0;

                    for( int i = 0; i < 10001; i++ ){
                          if( a2[i]!=0 && a2[i] > mx1 ){
                            mx1 = a2[i];
                            find = i;
                          }
                    }

                    cout << find << " " << mx1 << endl;
           }
  return 0;
}