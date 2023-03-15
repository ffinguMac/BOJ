#include <iostream>
using namespace std;

int main(void)
{
  int N, res = 0;
  cin >> N;

  for (int i = 5; i <= N; i *= 5)
    res += N / i;
  cout << res;

  return 0;
}
