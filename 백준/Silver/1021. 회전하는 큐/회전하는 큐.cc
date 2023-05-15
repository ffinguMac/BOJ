#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int N, M;
	int num, left, right;
	int cnt = 0;
	deque<int> deque;

	cin >> N >> M;

	for (int i = 1; i <= N; ++i)
		deque.push_back(i);

	while (M--) 
	{
		cin >> num;

		for (int i = 0; i < deque.size(); ++i) {
			if (deque[i] == num) {
				left = i;
				right = deque.size() - left;
				break;
			}
		}
		if (left < right) 
		{
			while (true) 
			{
				if (deque.front() == num) 
				{
					deque.pop_front();
					break;
				}
				cnt++;
				deque.push_back(deque.front());
				deque.pop_front();
			}
		}
		else 
		{
			while (true) 
			{
				if (deque.front() == num) 
				{
					deque.pop_front();
					break;
				}
				cnt++;
				deque.push_front(deque.back());
				deque.pop_back();
			}
		}
	}
	cout << cnt;

	return 0;
}