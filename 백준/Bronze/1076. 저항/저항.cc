#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string color_list[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
  string color;
  int cnt[3];
  long long res = 0;
  for (int i = 0; i < 3; i++)
  {
    cin >> color;
    for (int j = 0; j < 10; j++)
      if (color == color_list[j])
        cnt[i] = j;
  }
  res = cnt[0] * 10 + cnt[1];
  for (int i = 0; i < cnt[2]; i++)
    res *= 10;
  cout << res;

  return 0;
}