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
             int mx = 26;
            int freq[mx];
            memset(freq, 0, sizeof(freq));

            for( int i = 0 ; i < s1.size() ; i++ ){
                freq[s1[i] - 'A']++;
            }
             int cnt = 0;
            for( int i = 0 ; i < s1.size() ; i++ ){
                if(freq[s1[i] - 'A']%2!=0){
                    cnt++;
                }
            }
            if(cnt == 2){
                cout <<"NO SOLUTION\n";
                 return 0;
            }
           
             for (int i = 0; i < s1.size(); i++) {

                    if (freq[s1[i] - 'A'] %2 == 0) {

                  for(int j = 0 ; j < freq[s1[i] - 'A']/2 ; j++ ){
                       cout << s1[j];
                  }
        }
    }

  return 0;
}