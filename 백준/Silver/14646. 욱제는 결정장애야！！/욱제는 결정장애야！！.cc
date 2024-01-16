#include <iostream>
using namespace std;

int main(void) {
  int N, tmp, cnt = 0, res = 0;
  int arr[100001] = {0, };
  cin >> N;

  for (int i = 0; i < 2 * N; i++) {
    cin >> tmp;
    arr[tmp]++;
    cnt++;
    if (arr[tmp] == 2)
      cnt -= 2;
    if (cnt > res)
      res = cnt;
  }

  cout << res;

  return 0;
}