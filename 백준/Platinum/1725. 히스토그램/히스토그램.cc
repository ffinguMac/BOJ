#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int N, res = 0;
  vector<int> arr(100001);
  stack<int> stack;
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> arr[i];
  stack.push(0);
  for (int i = 1; i <= N + 1; i++)
  {
    while (!stack.empty() && arr[stack.top()] > arr[i])
    {
      int tmp = stack.top();
      stack.pop();
      res = max(res, arr[tmp] * (i - stack.top() - 1));
    }
    stack.push(i);
  }
  cout << res;

  return 0;
}