#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int arr[501][501];
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < i + 1; j++)
      cin >> arr[i][j];
  for (int i = N - 1; i >= 1; i--)
    for (int j = 0; j < i; j++)
      arr[i - 1][j] += max(arr[i][j], arr[i][j + 1]);
  cout << arr[0][0];

  return 0;
}