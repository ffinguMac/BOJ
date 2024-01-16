#include<iostream>
#include<algorithm>
using namespace std;

int check(int num) {
  int cnt = 0;
  while (num > 0) {
    if (num % 10 == 9)
      cnt++;
    num /= 10;
  }

  return cnt;
}

int main(void) {
  int n, m;
  cin >> n >> m;
  int nine = 0;
  int rowMax = 0, colMax = 0;
  int arr[500][500];
  for (int i = 0; i < n; i++) {
    int colSum = 0;
    for (int j = 0; j < m; j++) {
      int temp;
      cin >> temp;
      arr[i][j] = check(temp);
      colSum += arr[i][j];
      nine += arr[i][j];
    }
    colMax = max(colMax, colSum);
  }

  for (int i = 0; i < m; i++) {
    int rowSum = 0;
    for (int j = 0; j < n; j++)
      rowSum += arr[j][i];
    rowMax = max(rowMax, rowSum);
  }
  cout << nine - max(colMax, rowMax);

  return 0;
}