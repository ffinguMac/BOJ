#include <iostream>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  int res = 0;
  for (int i = 2; i < N - 1; i += 2)
    res += (N - i - 2) / 2;
  cout << res;

  return 0;
}
