#include <iostream>
#include <string>
using namespace std;

string X;
string number = "";
string minNumber = "999999";
int digit;
bool used[10];

void backtrack(int depth) {
  if (depth == digit) {
    if (X < number && number < minNumber) {
      minNumber = number;
    }
    return;
  }

  for (int i = 0; i < digit; ++i) {
    if (used[i]) {
      continue;
    }
    used[i] = true;
    number += X[i];
    backtrack(depth + 1);
    used[i] = false;
    number.pop_back();
  }
}

int main() {
  cin >> X;
  digit = X.length();

  backtrack(0);

  if (minNumber == "999999") {
    minNumber = "0";
  }
  cout << minNumber;

  return 0;
}