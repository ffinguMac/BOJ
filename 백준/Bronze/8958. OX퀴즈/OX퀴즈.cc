#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int n;
  string arr;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr;
    int cnt = 0, res = 0;
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[j] == 'O')
        cnt++;
      else
        cnt = 0;
      res += cnt;
    }
    cout << res << '\n';
  }

  return 0;
}