#include <iostream>
using namespace std;

int main(void)
{
  int T;
  cin >> T;

  if (T % 10 != 0)
  {
    cout << -1;
    return 0;
  }
  int A = 0, B = 0, C = 0;
  A = T / 300;
  B = (T % 300) / 60;
  C = ((T % 300) % 60) / 10;
  cout << A << ' ' << B << ' ' << C;

  return 0;
}
