#include <iostream>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  int dp[10];
  dp[1] = 0;
  dp[2] = 2;

  for (int i = 3; i <= N; i++)
    dp[i] = dp[i - 1] * 3;

  cout << dp[N];

  return 0;
}