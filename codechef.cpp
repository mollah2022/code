#include <iostream>
#include <vector>
using namespace std;

void constructMatrix(int N, int M) {
    vector<vector<int>> matrix(N, vector<int>(M));
    int base = 2;  

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {

            matrix[i][j] = base + i + j;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, M;
        cin >> N >> M;  
        constructMatrix(N, M);
    }

    return 0;
}
