#include <iostream>
using namespace std;

int main(void)
{
  int N;
  cin >> N;

  int upper = 10, tmp;
  while (N > upper)
  {
    tmp = N % upper;
    N -= tmp;
    if (tmp >= 5 * (upper / 10))
      N += upper;
    upper *= 10;
  }
  cout << N;

  return 0;
}
