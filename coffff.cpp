#include <iostream>
using namespace std;

int main() {
    int K, G, M; 
    cin >> K >> G >> M;
    
    int glass = 0, mug = 0; 
    
    for (int i = 0; i < K; i++) {
        if (glass == G) {
            glass = 0;
        } else if (mug == 0) {
            mug = M;
        } else {
            int transfer = min(G - glass, mug);
            glass += transfer;
            mug -= transfer;
        }
    }
    
    cout << glass << " " << mug << endl;
    
    return 0;
}
