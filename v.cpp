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
                       int a1,a2,a3,b1,b2,b3; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
                       vector<int> v1;
                       vector<int>v2;
                       v1.push_back(a1);
                       v1.push_back(a2);
                        v1.push_back(a3);
                        v2.push_back(b1);
                        v2.push_back(b2);
                        v2.push_back(b3);
                        sort(v1.rbegin(),v1.rend());
                        sort(v2.rbegin(),v2.rend());
                        int sum =0,sum1 = 0;
                        for(int i=0;i<v1.size();i++){
                                  sum = (sum *10)+v1[i];
                        }
                       // cout << v1[0] << endl;
                          for(int i=0;i<v2.size();i++){
                                  sum1 = (sum1*10)+v2[i];
                        }
                      //  cout << sum <<" "<<sum1 << endl;
                        if(sum>sum1){
                               cout <<"Alice\n";
                        }
                        else if(sum1>sum){
                              cout <<"Bob\n";
                        }
                        else{
                              cout <<"Tie\n";
                        }
               }
  return 0;
}