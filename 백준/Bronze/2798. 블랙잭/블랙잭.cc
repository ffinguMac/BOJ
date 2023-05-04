#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, M, res = 0;
  cin >> N >> M;
  vector<int> arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        if (arr[i] + arr[j] + arr[k] <= M
          && arr[i] + arr[j] + arr[k] > res)
          res = arr[i] + arr[j] + arr[k];
      }
    }
  }
  cout << res;

  return 0;
}