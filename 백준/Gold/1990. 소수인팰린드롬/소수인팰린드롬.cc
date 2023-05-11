#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int a, b;
int prime[10000000];
void is_prime()
{
  for (int i = 2; i <= min(b, 9989899); i++)
    prime[i] = i;
  for (int i = 2; i <= min(b, 9989899); i++)
  {
    if (prime[i] == 0)
      continue;
    for (int j = i * 2; j <= min(b, 9989899); j += i)
      prime[j] = 0;
  }
  return;
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> a >> b;
  is_prime();
  for (int i = a; i <= min(b, 9989899); i++)
  {
    if (prime[i] != 0 && check(i))
      cout << i << '\n';
  }
  cout << -1;

  return 0;
}