#include <iostream>
using namespace std;

int main(void)
{
  int N, M;
  cin >> N >> M;

  for (int i = 0; i < N - 1; i++)
  {
    if (i < N - M)
      cout << i << ' ' << i + 1 << '\n';
    else
      cout << N - M << ' ' << i + 1 << '\n';
  }

  return 0;
}