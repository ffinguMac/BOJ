#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  vector<int> arr(N);
  vector<int> dp(K + 1);
  dp[0] = 1;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  for (int i = 0; i < N; i++)
    for (int j = arr[i]; j <= K; j++)
      dp[j] += dp[j - arr[i]];

  cout << dp[K];

  return 0;
}