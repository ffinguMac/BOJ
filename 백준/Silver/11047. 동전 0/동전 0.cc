#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, K, cnt = 0;
  cin >> N >> K;
  vector<int> arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  for (int i = N - 1; i >= 0; i--)
  {
    while (K - arr[i] >= 0)
    {
      cnt++;
      K -= arr[i];
    }
  }
  cout << cnt;

  return 0;
}
