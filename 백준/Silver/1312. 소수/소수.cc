#include <iostream>
using namespace std;

int main(void)
{
  int A, B, N;
  cin >> A >> B >> N;
  int res = 0;
  for (int i = 0; i < N + 1; i++)
  {
    res = A / B;
    A = A % B * 10;
  }

  cout << res;

  return 0;
}