#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N, K;
        cin >> N >> K;  
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];  
        }
        
        sort(A.begin(), A.end());
        
        if( K==1 ){
            int value = (2*(A[N-1]))+A[0]+A[N-2];
            cout << value << endl;
            continue;
        }
          int score = A[N-1-K]+A[N-2]+A[0]+A[N-1];
        cout << score << endl;
    }
    
    return 0;
}
