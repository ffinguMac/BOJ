#include <iostream>
using namespace std;

int main() {
  int N;
  long long arr[1001];
  long long dp[1001] = {0, };

  cin >> N;
  arr[0] = 0;
  for (int i = 1; i <= N; i++)
    cin >> arr[i];

  for (int i = 1; i <= N; i++)
    for (int j = 1; j <= i; j++)
      dp[i] = (dp[i] > dp[i - j] + arr[j]) ? dp[i] : dp[i - j] + arr[j];

  cout << dp[N];

  return 0;
}