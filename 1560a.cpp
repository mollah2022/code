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

                vector < int > v1;

                for( int i = 0; i < 1666; i++ ){
                    int a = i;
                    int b = a+1;
                    int p = b % 10;

                    if( p!=3 && b%3!=0 ){
                        v1.push_back(b);
                    }
                }
                n = n - 1;
                for( int i = 0; i < v1.size();i++ ){
                    if( i == n ){
                          cout << v1[i] << endl;
                          break;
                    }
                }
           }
  return 0;
}