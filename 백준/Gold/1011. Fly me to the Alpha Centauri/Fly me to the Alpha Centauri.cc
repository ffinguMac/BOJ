#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int x, y;
    cin >> x >> y;
    double tmp = y - x;
    double pow = sqrt(tmp);
    int pow_up = round(sqrt(tmp));

    if (pow <= pow_up)
      cout << pow_up * 2 - 1 << '\n';
    else
      cout << pow_up * 2 << '\n';
  }
  return 0;
}