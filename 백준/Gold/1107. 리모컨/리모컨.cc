#include <iostream>
#include <algorithm>

using namespace std;

int check(int arr[11], int n) {
  if (n == 0) {
    if (arr[0] == 1) return 0;
    else return 1;
  }
  int len = 0;
  while (n > 0) {
    if (arr[n % 10] == 1) return 0;
    n /= 10;
    len++;
  }
  return len;
}

int main() {
  int n, m;
  cin >> n >> m;
  int arr[11];
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    arr[x] = 1;
  }
  int ans = abs(n - 100);

  for (int i = 0; i <= 10000000; i++) {
    int c = i;
    int len = check(arr, c);
    if (len > 0) {
      int press = abs(c - n);
      if (ans > press + len) {
        ans = press + len;
      }
    }
  }
  cout << ans;
}