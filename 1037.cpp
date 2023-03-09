#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
  int N;
  cin >> N;

  vector<int> arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  int max = *max_element(arr.begin(), arr.end());
  int min = *min_element(arr.begin(), arr.end());
  cout << max * min;

  return 0;
}
