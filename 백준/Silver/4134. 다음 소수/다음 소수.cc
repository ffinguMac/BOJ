#include <iostream>
using namespace std;

bool is_prime(long long num)
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

long long find(long long num)
{
  if (num <= 1)
    return 2;
  long long res = num;
  while (!is_prime(res))
    res++;
  return res;
}

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N;
  long long num;
  cin >> N;
  while (N--)
  {
    cin >> num;
    cout << find(num) << '\n';
  }
  return 0;
}