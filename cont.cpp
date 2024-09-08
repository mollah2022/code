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
                    int n; cin >> n;
                    int cnt = 0;
                    vector<int>v1;
                    while(n>10){
                            if(n>=10000){
                                    int a = n/10000;
                                     n = n%10000;
                                    v1.push_back(a*10000);
                                    cnt++;
                            }
                            else if(n>=1000){
                                   int b = n/1000;
                                    n = n%1000;
                                   v1.push_back(b*1000);
                                   cnt++;
                            }
                            else if(n>=100){
                                  int c = n/100;
                                   n = n%100;
                                  v1.push_back(c*100);
                                  cnt++;
                            }
                            else if(n>=10){
                                     int d = n/10;
                                      n = n%10;
                                     v1.push_back(d*10);
                                     cnt++;
                            }
                    }
                    if(n>0){
                          v1.push_back(n);
                          cnt++;
                    }
                    cout <<cnt << endl;
                    for(int i=0;i<v1.size();i++){
                           cout << v1[i] <<" ";
                    }
                    cout << endl;
               }
  return 0;
}