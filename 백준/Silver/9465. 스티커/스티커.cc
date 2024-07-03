#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int arr[2][100001];
  int dp[2][100001] = {0,};
  int T, n;

  cin >> T;
  while (T--){
    cin >> n;
    for (int j = 0; j < n; j++)
      cin >> arr[0][j];
    for (int k = 0; k < n; k++)
      cin >> arr[1][k];
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[0][1] = dp[1][0] + arr[0][1];
    dp[1][1] = dp[0][0] + arr[1][1];
    for (int l = 2; l < n; l++) {
      dp[0][l] = max(dp[1][l - 1], dp[1][l - 2]) + arr[0][l];
      dp[1][l] = max(dp[0][l - 1], dp[0][l - 2]) + arr[1][l];
    }
    cout << max(dp[0][n - 1], dp[1][n - 1])<< '\n';
  }

  return 0;
}