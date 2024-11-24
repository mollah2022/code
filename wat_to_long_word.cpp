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
               string s1; cin >> s1;
               int ln = s1.size();
               if( ln<=10 ){
                  cout << s1 << endl;
               }
               else{
                   cout <<s1[0]<<ln-2<<s1[ln-1]<<endl;
               }
           }
  return 0;
}