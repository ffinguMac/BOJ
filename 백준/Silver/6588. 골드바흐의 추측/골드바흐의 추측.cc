#include <iostream>
using namespace std;

bool prime[1000001];
void is_prime()
{
  prime[0] = true;
  prime[1] = true;

  for (int i = 2; i * i < 1000001; i++) {
    if (prime[i] == true)
      continue;
    for (int j = i * i; j < 1000001; j += i) {
      prime[j] = true;
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  int num;
  bool flag = false;
  is_prime();
  while (true)
  {
    cin >> num;
    if (num == 0)
      break;
    for (int i = 3; i < num; i += 2)
    {
      if (!prime[i] && !prime[num - i])
      {
        cout << num << " = " << i << " + " << num - i << '\n';
        flag = true;
        break;
      }
    }
    if (!flag)
      cout << "Goldbach's conjecture is wrong.\n";
  }

  return 0;
}