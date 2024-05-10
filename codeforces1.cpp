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
                    string s1;  cin >> s1;
                     string s2;
                     bool find = false;
                    for(int i=0;i<s1.size()-1;i++){
                           if(s1[i]!=s1[i+1]){
                                find = true;
                                break;
                           }
                    }
                    if(find == 0){
                           cout <<"NO\n";
                    }
                    else{
                              cout <<"YES\n";
                              for(int i=1;i<s1.size();i++){
                                   cout << s1[i];
                              }
                              cout << s1[0]<<endl;
                    }
                   
              }
  return 0;
}