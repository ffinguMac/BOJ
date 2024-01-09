#include <iostream>
using namespace std;

int main(void) {
  int N;
  long long dp[91];
  cin >> N;

  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i <= N; i++)
    dp[i] = dp[i - 1] + dp[i - 2];
  cout << dp[N];

  return 0;
}