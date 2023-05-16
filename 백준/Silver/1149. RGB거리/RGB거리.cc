#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int arr[1002][3], R, G, B;
  arr[0][0] = 0;
  arr[0][1] = 0;
  arr[0][2] = 0;
  for (int i = 1; i <= N; i++)
  {
    cin >> R >> G >> B;
    arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + R;
    arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + G;
    arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + B;
  }
  cout << min(arr[N][0], min(arr[N][1], arr[N][2]));

  return 0;
}