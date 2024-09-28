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
                    string s1,s2; cin >> s1 >> s2;

                    int minValue = 0;

                    for( int i = 0 ; i < s1.size() ; i++ ){
                        if( s1[i] != s2[i] && s1[i]!='?' && s2[i] != '?'){
                                   minValue++;
                        }
                    }

                     int maxValue = 0;

                     for( int i = 0 ; i < s1.size() ; i++ ){

                        if( s1[i] == '?' && s2[i] == '?'){
                               maxValue++;
                        }

                       else if( s1[i] != s2[i] ){
                                   maxValue++;
                        }
                    }

                    cout << minValue << " " << maxValue << endl;
            }
  return 0;
}