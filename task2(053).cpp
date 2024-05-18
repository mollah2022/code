t#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cout<<"Enter the no. of processes ";
    cin>>n;
   cout<<"Enter the no. of resources ";
    cin>>m;
    int alloc[n][m],max[n][m],taloc[m];
   for(int i=0;i<m;i++){
    taloc[i]=0;
    }
    for(i=0; i<n; i++) {
       cout<<"Process "<<i+1<<endl;
        for(j=0; j<m; j++) {
        cout<<"Maximum value for resource "<<j+1<<":";
            cin>>max[i][j];
        }
        for(k=0; k<m; k++) {
        cout<<"Allocated from resource "<<k+1<<":";
            cin>>alloc[i][k];
            taloc[k]+=alloc[i][k];
        }
    }

    /*for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cin>>alloc[i][j];
            taloc[j]+=alloc[i][j];
        }
    }*/

    int avail[m],total[m];

    for(int i=0;i<m;i++){
    cout<<"Enter total value of resource "<<i+1<<":";
    cin>>total[i];
    avail[i]=total[i]-taloc[i];
  //  cout<<taloc[i]<<" "<<avail[i]<<endl;
    }

    int f[n],ans[n],ind;
    ind=0;
    for (k=0;k<n;k++){
        f[k]=0;
    }
    int need[n][m];
    for (i=0;i<n;i++){
      for (j=0;j<m;j++)
        need[i][j]=max[i][j]-alloc[i][j];
    }
    int y=0;
    for(k=0;k<n;k++) {
    for(i=0;i<n;i++) {
       if (f[i]==0) {
       int flag=0;
       for (j=0;j<m;j++) {
      if (need[i][j]>avail[j]){
          flag = 1;
           break;
                }
              }
      if (flag==0) {
         ans[ind++]=i;
         for(y=0;y<m;y++)
         avail[y]+=alloc[i][y];
           f[i]=1;
          }
        }
      }
    }
    int flag=1;

    for(int i=0;i<n;i++)
    {
        if(f[i]==0)
        {
            flag=0;
            cout<<"There is no safe sequence"<<endl;
            break;
        }
       }
    if(flag==1)
    {
        cout<<"The System is currently in safe state and"<<endl;
        cout<<"<";
        for(i=0;i<n-1;i++)
            cout<<" P"<<ans[i]+1<<" ";
        cout<<" P"<<ans[n-1]+1<<">";

        cout<<" is the safe sequence."<<endl;
    }
    return 0;
}

