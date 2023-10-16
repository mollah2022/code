#include<iostream>
using namespace std;
#define ll long long
int main()
{
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++){
    int n,i;
    cin>>n;
    ll arr[n],x,ans,c=1,p;
    ans=(n*(n+1))/2;
    ans=ans-n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    for(i=0;i<n-1;i++){
    if(arr[i]==arr[i+1])
    c++;
    else{
    p=(c*(c+1))/2;
    p=p-c;
    ans=ans-p;
    c=1;
    }
    }
    p=(c*(c+1))/2;
    p=p-c;
    ans=ans-p;
    
    cout <<"Case "<<j<<": "<<ans<<endl;
    }
    return 0;
}