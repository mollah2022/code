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
           string s1; cin >> s1;
           transform(s1.begin(),s1.end(),s1.begin(),::tolower);
           for( int i = 0; i < s1.size();i++ ){
              if( s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' ||
                s1[i]=='u' || s1[i]=='y'){
                s1.erase(s1.begin()+i);
                i = i - 1;
              }
           }

           for( int i = 0; i < s1.size();i++ ){
              cout <<"."<<s1[i];
           }
           cout << endl;
  return 0;
}