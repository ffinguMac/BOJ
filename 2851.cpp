#include <iostream>
using namespace std;

int main(void)
{
  int mushroom[10];
  for (int i = 0; i < 10; i++)
    cin >> mushroom[i];
  int sum = 0, res = 0;
  for (int i = 0; i < 10; i++)
  {
    res = sum + mushroom[i];
    if (res >= 100)
    {
      if (res - 100 <= 100 - sum)
        cout << res;
      else
        cout << sum;
      return 0;
    }
    sum = res;
  }
  cout << sum;

  return 0;
}
