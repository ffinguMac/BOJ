#include <iostream>
using namespace std;

int main(void)
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int N, M;
    cin >> N >> M;
    long long res = 1;
    int r = 1;
    for (int j = M; M - N < j; j--)
    {
      res *= j;
      res /= r++;
    }
    cout << res << '\n';
  }

  return 0;
}
