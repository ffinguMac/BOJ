#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  long long dp[101][10];
  long long res = 0;
  for (int i = 1; i < 10; i++)
    dp[1][i] = 1;
  dp[1][0] = 0;
  
  for (int i = 2; i <= N; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == 0)
        dp[i][j] = dp[i - 1][j + 1] % 1000000000;
      else if (j == 9)
        dp[i][j] = dp[i - 1][j - 1] % 1000000000;
      else
        dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1] % 1000000000;
    }
  }

  for (int i = 0; i < 10; i++)
    res += dp[N][i];

  cout << res % 1000000000;

  return 0;
}