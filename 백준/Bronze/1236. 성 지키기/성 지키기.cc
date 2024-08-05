#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char arr[50][50];
    int x[50] = {0, }, y[50] = {0, };
    int xCount = 0, yCount = 0; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'X') {
                x[j] = 1;
                y[i] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        if (x[i] == 0)
            xCount++;
    }
    for (int i = 0; i < N; i++) {
        if (y[i] == 0)
            yCount++;
    }

    cout << max(xCount, yCount);

    return 0;
}
