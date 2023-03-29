#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
  return a > b;
}
  
int main(void)
{
  int N;
  cin >> N;
  int A[N], B[N], tmp[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];
  for (int i = 0; i < N; i++)
  {
    cin >> B[i];
    tmp[i] = B[i];
  }
  sort(A, A + N);
  sort(tmp, tmp + N, cmp);
  int res = 0;
  for (int i = 0; i < N; i++)
    res += A[i] * tmp[i];

  cout << res;

  return 0;
}