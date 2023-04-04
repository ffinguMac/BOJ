#include <iostream>
using namespace std;

int main(void)
{
  int a1, a2, c, n;
  cin >> a1 >> a2;
  cin >> c;
  cin >> n;
  if (a1 * n + a2 <= c * n && a1 <= c)
    cout << 1;
  else
    cout << 0;

  return 0;
}