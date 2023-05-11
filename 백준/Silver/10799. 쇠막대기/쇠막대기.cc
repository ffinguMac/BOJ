#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
  string arr;
  stack<int> stack;
  int cnt = 0;
  cin >> arr;

  for (int i = 0; i < arr.length(); i++)
  {
    if (arr[i] == '(')
      stack.push(i);
    else
    {
      if (arr[i - 1] == '(')
      {
        stack.pop();
        cnt += stack.size();
      }
      else
      {
        stack.pop();
        cnt++;
      }
    }
  }
  cout << cnt;

  return 0;
}