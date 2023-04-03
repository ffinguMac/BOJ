#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++)
    cin >> p[i];

  sort(p.begin(), p.end());
  int res = 0;
  for (int i = 0; i < N; i++)
    for (int j = 0; j <= i; j++)
      res += p[j];

  cout << res;

  return 0;
}