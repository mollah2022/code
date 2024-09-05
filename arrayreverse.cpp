#include<bits/stdc++.h>
using namespace std;

const int mx = 100123;
int a1[mx];

int main(){

      int n; cin >> n;
      for(int i=0;i<n;i++){
              cin >> a1[i];
      }
      for(int i=0, j=n-1;i<j;i++,j--){
             int temp = a1[i];
             a1[i] = a1[j];
             a1[j] = temp;
      }
      for(int i=0;i<n;i++){
             cout << a1[i] <<" ";
        }
        cout << endl;

    return 0;
}

