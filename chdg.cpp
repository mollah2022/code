//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               tst{
                       char c1,c2,c3,c4,c5,c6; cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
                       string s1 =" ";
                       s1 +=c1;
                       s1 +=c2;
                       s1 +=c3;
                       s1 +=c4;
                       s1 +=c5;
                       s1 +=c6;
                       //cout << s1 << endl;
                    bool find = false;
                    for(int i=0;i<s1.size()-2;i++){
                            if(s1[i]=='W' && s1[i+1]=='W' && s1[i+2]=='W'){
                                   find = true;
                                   break;
                            }
                    }
                    if(find == 1){
                          yes
                    }
                    else{
                          no
                    }
               }
  return 0;
}