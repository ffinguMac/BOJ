#include <iostream>
using namespace std;

int is_prime(int num)
{
  if (num <= 1)
    return 0;
  if (num == 2)
    return 1;
  for (int i = 2; i <= num / i; i++)
    if (num % i == 0)
      return 0;
  return 1;
}

int main(void)
{
  int M, N;
  cin >> M >> N;
  int res = 0, min = -1;
  for (int i = M; i <= N; i++)
  {
    if (is_prime(i) == 1)
    {
      if (min == -1)
        min = i;
      res += i;
    }
  }
  if (res == 0)
    cout << -1;
  else
    cout << res << '\n' << min;

  return 0;
}