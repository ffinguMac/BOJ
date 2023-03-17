#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int res = 0;
  string arr;
  cin >> arr;

  for (int i = 0; i < arr.size(); i++)
  {
    if ('A' <= arr[i] && arr[i] <= 'F')
      res = res * 16 + arr[i] - 'A' + 10;
    else
      res = res * 16 + arr[i] - '0';
  }
  cout << res;

  return 0;
}
