#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int n, cnt = 0;
  vector <int> arr(42);
  for (int i = 0; i < 10; i++)
  {
    cin >> n;
    arr[n % 42]++;
  }
  for (int i = 0; i < arr.size(); i++)
    if (arr[i] != 0)
      cnt++;
  cout << cnt;

  return 0;
}