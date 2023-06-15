#include <iostream>
using namespace std;
#define ll long long
bool isvowel(char v){
    if(v=='a'||v=='e'|| v=='i'||v=='o'||v=='u')
    {
        return true;
    }
    return false;
}

int main() {
    ll test;
 cin>>test;
 for(int i=0;i<test;i++){
     ll n,k;
     cin>>n>>k;
     string s="";
     cin>>s;
     ll cnt=0,sum=1;
     ll lv=0,fv=0;
    ll check=0;
 int mod=1e9+7;
     bool flag=false;
     for(int j=0;j<n;j++){
    if(isvowel(s[j])){
        cnt++;
        if(cnt==1){
            fv=j;
        }
        if(k==cnt&& check==0){
            check=1;
            lv=j;
            cnt=0;
        }
        else if(k==cnt){
           
            cnt=0;
         sum=(sum*(fv-lv))%mod;
          lv=j;
        }
    }
         
     }
     cout<<sum<<endl;
     
     
 }
 return 0;
}