#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  long long dp[33334];
  dp[1] = 0;
  dp[2] = 2;

  for (int i = 3; i <= N; i++)
    dp[i] = dp[i - 1] * 3 % 1000000009;

  cout << dp[N] % 1000000009;

  return 0;
}