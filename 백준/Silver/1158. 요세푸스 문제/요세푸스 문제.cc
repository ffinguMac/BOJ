#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  queue<int>queue;
  for (int i = 1; i <= N; i++)
    queue.push(i);
  cout << '<';
  while (queue.size() > 1)
  {
    for (int i = 1; i < K; i++)
    {
      int first = queue.front();
      queue.pop();
      queue.push(first);
    }
    cout << queue.front() << ", ";
    queue.pop();
  }
  cout << queue.front() << '>';

  return 0;
}