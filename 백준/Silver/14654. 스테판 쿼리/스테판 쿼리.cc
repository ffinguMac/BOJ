#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  int ace[301];
  int satgat[301];
  int aceWin = 0, satgatWin = 0, maxWin = 0;

  for (int i = 0; i < N; i++)
    cin >> ace[i];
  for (int i = 0; i < N; i++)
    cin >> satgat[i];

  for (int i = 0; i < N; i++) {
    if (ace[i] == 1 && satgat[i] == 2) 
      satgatWin++, aceWin = 0;
    else if (ace[i] == 2 && satgat[i] == 3) 
      satgatWin++, aceWin = 0;
    else if (ace[i] == 3 && satgat[i] == 1) 
      satgatWin++, aceWin = 0;
    else if (satgat[i] == 1 && ace[i] == 2) 
      aceWin++, satgatWin = 0;
    else if (satgat[i] == 2 && ace[i] == 3) 
      aceWin++, satgatWin = 0;
    else if (satgat[i] == 3 && ace[i] == 1) 
      aceWin++, satgatWin = 0;
    else if (satgat[i] == ace[i]) {
      if (aceWin)
        satgatWin++, aceWin = 0;
      else
        aceWin++, satgatWin = 0;
    }
    maxWin = max({ maxWin, aceWin, satgatWin });
  }
  cout << maxWin;

  return 0;
}