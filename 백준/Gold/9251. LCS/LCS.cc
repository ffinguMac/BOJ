#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  string str1;
  string str2;
  int arr[1001][1001] = {0, };
  cin >> str1 >> str2;
  int len1 = str1.length();
  int len2 = str2.length();

  for (int i = 1; i <= len1; i++) {
    for (int j = 1; j <= len2; j++) {
      if (str1[i - 1] == str2[j - 1])
        arr[i][j] = arr[i - 1][j - 1] + 1;
      else
        arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
    }
  }
  cout << arr[len1][len2];

  return 0;
}