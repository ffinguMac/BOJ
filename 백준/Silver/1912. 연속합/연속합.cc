#include <iostream>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int arr[100002], dp[100002] = { 0, };
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    dp[i] = arr[i];
  }
  int max_num = dp[0];
  for (int i = 1; i < N; i++)
  {
    dp[i] = max(dp[i], dp[i - 1] + arr[i]);
    if (dp[i] > max_num)
      max_num = dp[i];
  }
  cout << max_num;

  return 0;
}