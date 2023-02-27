#include <iostream>
using namespace std;

int main(void)
{
  int score, res = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> score;
    if (score < 40)
      score = 40;
    res += score;
  }
  cout << res/5;

  return 0;
}
