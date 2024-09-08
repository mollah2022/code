#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int fingers[n],gloves[n];
        for(int i=0;i<n;i++)
        {
            cin>>fingers[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>gloves[i];
        }
        int front =0,back=0;
        for(int i=0;i<n;i++)
        {
            if(fingers[i]<=gloves[i])
            front =1;
            else
            {   
               
                front=0;
                break;
            }
            
        }
        // cout<<"This is the"<<front<<endl;
        for(int i=0;i<n;i++)
        {
            if(fingers[i]<=gloves[n-1-i])
            back =1;
            else
            {
                back=0;
                break;
            }
            
        }
        if(front+back==2)
        cout<<"both"<<endl;
        else if(front==1)
        cout<<"front"<<endl;
        else if(back==1)
        cout<<"back"<<endl;
        else
        cout<<"none"<<endl;
    }
}