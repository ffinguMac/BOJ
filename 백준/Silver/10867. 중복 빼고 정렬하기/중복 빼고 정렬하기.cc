#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int N;
  int flag = -1;
  cin >> N;
  vector<int>arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());
  for (int i = 0; i < N; i++)
  {
    if (flag != arr[i])
    {
      cout << arr[i] << ' ';
      flag = arr[i];
    }
  }

  return 0;
}