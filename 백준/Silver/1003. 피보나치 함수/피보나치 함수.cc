#include <iostream>
using namespace std;

int main(void) {
  int T;
  long long dp[41];
  int n;
  cin >> T;
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;

  for (int i = 3; i < 41; i++)
    dp[i] = dp[i - 1] + dp[i - 2];

  for (int i = 0; i < T; i++) {
    cin >> n;
    if (n == 0)
      cout << "1 0" << '\n';
    else if (n == 1)
      cout << "0 1" << '\n';
    else
      cout << dp[n - 1] << ' ' << dp[n] << '\n';
  }
  return 0;
}