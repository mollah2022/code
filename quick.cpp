#include<bits/stdc++.h>
using namespace std;

int partion(int a1[],int low,int high,int pivot){
    int  p_index = low;
      for(int i=low;i<=high;i++){
            if(a1[i] <= pivot){
                swap(a1[p_index],a1[i]);
                p_index++;
            }
      }
      p_index--;
      return p_index;
}

void quick_sort(int a1[],int low,int high){
           if(low < high){
                  int pivot = a1[high];
                  int p_index = partion(a1, low, high, pivot);
                  quick_sort(a1,low,p_index-1);
                  quick_sort(a1,p_index+1,high);
           }
}

int32_t main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n; cin >> n;
     int a1[n];
     for(int i=0;i<n;i++){
         cin >> a1[i];
     }
     int low = 0;
     int high = n-1;
     quick_sort(a1,low,high);
     for(int i=0;i<n;i++){
         cout << a1[i] <<" ";
     }
     return 0;
}
