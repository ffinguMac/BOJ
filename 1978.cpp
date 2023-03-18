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
  int N;
  cin >> N;
  int cnt = 0, num;
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    if (is_prime(num) == 1)
      cnt++;
  }
  cout << cnt;

  return 0;
}
