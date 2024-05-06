#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Process No:"<<endl;
cin>>n;
int cpu[n];
//int arr[n];
int turn[n];
int priority[n];
int wait[n];
int serial[n];
queue<int>b;

/*for(int i = 0;i < n;i++)
{
    cin>>arr[i];
}*/
cout<<"Enter Cpu TIme:"<<endl;
for(int i = 0;i < n;i++)
{
    cin>>cpu[i];
}
cout<<"Enter Priorirty"<<endl;
for(int i = 0;i < n;i++)
{
    cin>>priority[i];
}
for(int i = 0;i < n;i++)
{
    serial[i]=i+1;
}

for(int i = 0;i<n-1;i++)
{
    int mini = i;
    for(int j=i+1;j<n;j++)
    {
        if(priority[j]<priority[mini])
        {
            mini =j;
        }
    }
    if(mini!=i)
    {
        swap(cpu[i],cpu[mini]);
        //swap(arr[i],arr[mini]);
        swap(priority[i],priority[mini]);
        swap(serial[i],serial[mini]);
    }
}
for(int i = 0;i < n;i++)

for(int i=0;i<n;i++)
{
    if(i==0)
    {
        wait[i]=0;
        turn[i]=wait[i]+cpu[i];
    }
    else
    {
        wait[i]=turn[i-1];
        turn[i]=turn[i-1]+cpu[i];
    }
}
float st=0;
float wt=0;
for(int i=0;i<n;i++)
{
    st=st+turn[i];
}
for(int i=0;i<n;i++)
{
    wt=wt+wait[i];
}
for(int i = 0;i<n;i++)
{
    int mini = i;
    for(int j=i+1;j<n;j++)
    {
        if(serial[j]<serial[mini])
        {
            mini =j;
        }
    }
    if(mini!=i)
    {
        swap(wait[i],wait[mini]);
        swap(turn[i],turn[mini]);
      //  swap(priority[i],priority[mini]);
        swap(serial[i],serial[mini]);
    }
}
for(int i =0;i<n;i++)
{
    cout<<"Process "<<i+1<<":"<<"Waiting Time:"<<wait[i]<<" "<<"Turnaround Time:"<<turn[i]<<endl;
}
cout<<"Average Waiting TIme:"<<wt/n<<endl;
cout<<"Average Turnaround TIme:"<<st/n;

}
