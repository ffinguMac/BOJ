#include <iostream>
using namespace std;

int res = 0;
int N, S;
int arr[20] = {0, };

void dfs(int i, int sum) {
  if (i == N)
    return;
  if (sum + arr[i] == S) res++;

  dfs(i + 1, sum);

  dfs(i + 1, sum + arr[i]);
}

int main(void) {

  cin >> N >> S;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  dfs(0, 0);
  cout << res;

  return 0;
}