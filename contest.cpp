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
                       int n,m; cin >> n >> m;
                      std::vector<int> v1;
                      for(int i=0;i<n;i++){
                           int a; cin >> a;
                           v1.push_back(a);
                      }
                      int sum = 0;
                      for(int i=0;i<m;i++){                   
                                         sum +=v1[i];
                      }
                      int l = v1.size();
                      for(int i=m;i<v1.size()-1;i++){
                           cout << v1[i] <<" ";
                      }
                      cout << v1[l-1]+sum << endl;


               }
  return 0;
}