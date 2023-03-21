#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string nb;
  cin >> nb;
  int i = 0;
  while (nb.length() % 3 != 0)
    nb = '0' + nb;
  for (int j = 0; j < nb.length(); j += 3)
  {
    int res = (nb[j] - '0') * 4 + (nb[j + 1] - '0') * 2 + (nb[j + 2] - '0') * 1;
    cout << res;
  }

return 0;
}
