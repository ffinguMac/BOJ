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

  for (int num = M; num <= N; num++)
  {
    if (is_prime(num) == 1)
      cout << num << '\n';
  }

  return 0;
}