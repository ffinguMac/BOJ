#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int N, M, L, K;
  int x, y, pX, pY;
  int res = 0, cnt = 0; 
  cin >> N >> M >> L >> K;
  vector<pair<int, int>> shootingStar(K);

  for (int i = 0; i < K; i++) {
    cin >> x >> y;
    shootingStar[i] = {x, y};
  }
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < K; j++) {
      cnt = 0;
      x = shootingStar[i].first;
      y = shootingStar[j].second;
      for (int k = 0; k < K; k++) {
        pX = shootingStar[k].first;
        pY = shootingStar[k].second;
        if (x <= pX && pX <= x + L && y <= pY && pY <= y + L)
          cnt++;
      }
      res = max(res, cnt);
    }
  }
  cout << K - res;

  return 0;
}