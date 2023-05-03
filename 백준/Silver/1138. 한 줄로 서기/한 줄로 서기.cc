#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, Person;
  cin >> N;
  vector<int> arr(11);
  for (int i = 0; i < N; i++)
  {
    cin >> Person;
    for (int j = 0; j < N; j++)
    {
      if (Person == 0 && arr[j] == 0)
      {
        arr[j] = i + 1;
        break;
      }
      else if (arr[j] == 0)
        Person--;
    }
  }
  for (int i = 0; i < N; i++)
    cout << arr[i] << " ";
}