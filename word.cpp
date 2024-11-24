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

           int lowerCase = 0, upperCase = 0;

           for( int i = 0; i < s1.size(); i++ ){
              if( s1[i] >= 'a' && s1[i] <= 'z' ){
                lowerCase++;
              }
              else{
                upperCase++;
              }
           }

           if( upperCase > lowerCase ){
              transform(s1.begin(),s1.end(),s1.begin(),::toupper);
              cout << s1 << endl;
           }
           else{
               transform(s1.begin(),s1.end(),s1.begin(),::tolower);
               cout << s1 << endl;
           }
  return 0;
}