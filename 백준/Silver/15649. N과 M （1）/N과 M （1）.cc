#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(9);
vector<bool> check(9);
void NandM(int N, int M, int cnt)
{
  if (cnt == M)
  {
    for (int i = 0; i < M; i++)
      cout << arr[i] << ' ';
    cout << '\n';
    return;
  }
  for (int i = 1; i <= N; i++)
  {
    if (!check[i])
    {
      check[i] = true;
      arr[cnt] = i;
      NandM(N, M, cnt + 1);
      check[i] = false;
    }
  }
}
int main(void)
{
  int N, M;
  cin >> N >> M;
  NandM(N, M, 0);
}