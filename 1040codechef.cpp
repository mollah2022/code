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
                   string s1; cin >> s1;

                   int freq[26];

                   memset(freq,0,sizeof(freq));

                   for(int i = 0 ; i < s1.size() ; i++ ){
                         freq[s1[i]-'a']++;
                   }

                   bool isOdd = false;

                   for ( int i = 0 ; i < s1.size() ; i++ ){
                           if( freq[s1[i]-'a'] != 0  ){
                                  
                                   if( freq[s1[i]-'a'] % 2 != 0 ) {
                                                 isOdd = true;
                                                 break;
                                   }
                           }
                           freq[s1[i]-'a'] = 0;
                   }
                   if( isOdd ){
                       cout <<"NO\n";
                   }
                   else{
                       cout << "YES\n";
                   }
             }
  return 0;
}