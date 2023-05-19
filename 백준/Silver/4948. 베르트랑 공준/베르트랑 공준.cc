#include <iostream>
using namespace std;

bool is_prime(int n)
{
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i <= n / i; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main(void)
{
  int N;
  while (true)
  {
    int cnt = 0;
    cin >> N;
    if (N == 0)
      break;
    for (int i = N + 1; i <= 2 * N; i++)
      if (is_prime(i) == true)
        cnt++;
    cout << cnt << '\n';
  }
  return 0;
}