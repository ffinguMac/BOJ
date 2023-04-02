#include <iostream>
using namespace std;

int is_prime(int num)
{
  if (num <= 1)
    return 0;
  else if (num == 2)
    return 1;
  for (int i = 2; i <= num / i; i++)
    if (num % i == 0)
      return 0;
  return 1;
}

int main(void)
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int n;
    cin >> n;
    for (int j = n / 2; j >= 2; j--)
    {
      if (is_prime(j) == 1 && is_prime(n - j) == 1)
      {
        cout << j << " " << n - j << '\n';
        break;
      }
    }
  }
  return 0;
}