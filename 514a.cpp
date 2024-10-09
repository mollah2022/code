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

           char temp = s1[0];

           for( int i = 0; i < s1.size(); i++ ){
                 if( s1[i] == '5' ){
                     s1[i] = '4';
                 }
                 else if( s1[i] == '6' ){
                     s1[i] = '3';
                 }
                 else if( s1[i] == '7' ){
                     s1[i] = '2';
                 }
                 else if( s1[i] == '8' ){
                     s1[i] = '1';
                 }
                 else if( s1[i] == '9' ){
                     s1[i] = '0';
                 }
           }

           if( s1[0] == '0' ){
               s1[0] = temp;
           }

              cout << s1 << endl;
  return 0;
}