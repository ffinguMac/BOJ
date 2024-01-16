#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int N, res = 0, tmp;
  cin >> N;
  for (int i = 0; i < 2 * N; i++) {
    cin >> tmp;
    res += abs(tmp);
  }
  cout << res;

  return 0;
}