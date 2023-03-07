#include <iostream>
using namespace std;

int main(void)
{
  int N, cnt = 0, tmp;
  cin >> N;
  tmp = N;
  while (true)
  {
    tmp = (tmp % 10) * 10 + (tmp / 10 + tmp % 10) % 10;
    cnt++;
    if (tmp == N)
      break;
  }
  cout << cnt;

  return 0;
}
