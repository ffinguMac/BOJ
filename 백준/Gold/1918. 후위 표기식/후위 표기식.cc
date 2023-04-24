#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
  string str;
  stack<char> stack;
  cin >> str;

  for (int i = 0; i < str.size(); i++)
  {
    if ('A' <= str[i] && str[i] <= 'Z')
      cout << str[i];
    else
    {
      if (str[i] == '(')
        stack.push(str[i]);
      else if (str[i] == '*' || str[i] == '/')
      {
        while (!stack.empty() && (stack.top() == '*' || stack.top() == '/'))
        {
          cout << stack.top();
          stack.pop();
        }
        stack.push(str[i]);
      }
      else if (str[i] == '+' || str[i] == '-')
      {
        while (!stack.empty() && stack.top() != '(')

        {
          cout << stack.top();
          stack.pop();
        }
        stack.push(str[i]);
      }
      else if (str[i] == ')')
      {
        while (!stack.empty() && stack.top() != '(')
        {
          cout << stack.top();
          stack.pop();
        }
        stack.pop();
      }
    }
  }
  while (!stack.empty())
  {
    cout << stack.top();
    stack.pop();
  }

  return 0;
}