#include <iostream>
#include <vector>
using namespace std;

int calculateMaxXOR(int N, int M, vector<vector<int>>& A) {
    int rowXOR = 0;
    int colXOR = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            rowXOR ^= A[i][j];
            colXOR ^= A[i][j];
        }
    }

    return rowXOR + colXOR;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }

        int maxXOR = calculateMaxXOR(N, M, A);
        cout << maxXOR << endl;
    }

    return 0;
}