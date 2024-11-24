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
           string s1; cin >> s1;

           int countValue = 0;

           for( int i = 0; i < s1.size()-1; i++ ){
               if( s1[i]==s1[i+1]){
                countValue++;
               }
           }
           cout << countValue << endl;
  return 0;
}