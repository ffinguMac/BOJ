#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_prime(int num)
{
  if (num <= 1)
    return false;
  if (num == 2)
    return true;
  for (int i = 2; i <= num / i; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}
 
bool check(int num)
{
  string str = to_string(num);
  string front, back;
  front = str;
  reverse(str.begin(), str.end());
  back = str;

  if (front == back)
    return true;
  else
    return false;
}

int main(void)
{
  int N;
  cin >> N;

  for (int i = N;; i++)
  {
    if (is_prime(i) && check(i))
    {
      cout << i;
      break;
    }
  }

  return 0;
}