#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
  string X, Y;
  cin >> X >> Y;
  reverse(X.begin(), X.end());
  reverse(Y.begin(), Y.end());

  int sum = stoi(X) + stoi(Y);
  string res = to_string(sum);
  reverse(res.begin(), res.end());

  cout << stoi(res);

  return 0;
}