#include <iostream>
#include <algorithm>
using namespace std;

int main(void) 
{
  int N;
  cin >> N;
  int arr[10000001];
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);
  for (int i = 0; i < N; i++)
    cout << arr[i] << '\n';

  return 0;
}