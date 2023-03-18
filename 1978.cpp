#include <iostream>
using namespace std;

bool is_prime(int num)
{
  if (num <= 1)
    return false;
  if (num == 2)
    return true;
  for (int i = 2; i <= num / i; i++)
    if (num % i == 0)
      return false;
  return true;
}

int main(void)
{
  int N;
  cin >> N;
  int cnt = 0, num;
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    if (is_prime(num) == true)
      cnt++;
  }
  cout << cnt;

  return 0;
}
