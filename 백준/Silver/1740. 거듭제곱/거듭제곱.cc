#include <iostream>
using namespace std;

int main(void)
{
  long long N;
  cin >> N;

  int i = 0, arr[40];
  while (N > 1)
  {
    arr[i] = N % 2;
    N /= 2;
    i++;
  }
  arr[i] = 1;
  long long res = 0, tmp;
  for (int j = 0; j <= i; j++)
  {
    tmp = 1;
    for (int k = 0; k < j; k++)
      tmp *= 3;
    res += tmp * arr[j];
  }
  cout << res;

  return 0;
}