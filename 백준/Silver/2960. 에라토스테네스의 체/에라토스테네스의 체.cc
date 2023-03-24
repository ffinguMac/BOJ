#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, K ,cnt = 0;
  cin >> N >> K;
  vector<int> arr(N + 1);

  for (int i = 2; i <= N; i++)
    arr[i] = 1;
  for (int i = 2; i <= N; i++)
  {
    for (int j = i; j <= N; j += i)
    {
      if (arr[j] != 0)
      {
        arr[j] = 0;
        cnt++;
        if (cnt == K)
        {
          cout << j;
          return 0;
        }
      }
    }
  }
  return 0;
}