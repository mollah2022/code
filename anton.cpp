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
           int n; cin >> n;

           string s1 = "Tetrahedron";
           string s2 = "Cube";
           string s3 = "Octahedron";
           string s4 = "Dodecahedron";
           string s5 = "Icosahedron";

           int cnt = 0;
           while(n--){
                    string s; cin >> s;

                    if( s1 == s ){
                        cnt += 4;
                    }
                    else if( s2 == s ){
                        cnt += 6;
                    }
                    else if( s3 == s ){
                        cnt += 8;
                    }
                    else if( s4 == s ){
                        cnt += 12;
                    }
                    else if( s5 == s ){
                        cnt += 20;
                    }
           }

           cout << cnt << endl;
  return 0;
}