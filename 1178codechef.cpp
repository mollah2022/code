#include<bits/stdc++.h>
using namespace std;
#define l long long int 
int main(){
    l t;
    cin>>t;
    while(t--){
        l a;
        cin>>a;
        l s[a];
        for(int i=0;i<a;i++){
            cin>>s[i];
        }
        l am=0,duong=0;
        for(int i=0;i<a;i++){
            if(s[i]>0) duong++;
            if(s[i]<0) am++;
        } cout<<(am*(am-1))/2 + (duong*(duong-1))/2<<endl;
    }
}