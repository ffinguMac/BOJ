#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
  vector<string> arr = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
  string str;
  cin >> str;
  for (int i = 0; i < arr.size(); i++)
  {
    while (true)
    {
      int tmp = str.find(arr[i]);
      if (tmp == string::npos)
        break;
      str.replace(tmp, arr[i].length(), "a");
    }
  }
  cout << str.length();

  return 0;
}
