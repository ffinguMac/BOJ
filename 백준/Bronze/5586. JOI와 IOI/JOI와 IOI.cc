#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string arr;
	cin >> arr;
	int JOI = 0, IOI = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 'J' && arr[i + 1] == 'O' && arr[i + 2] == 'I')
			JOI++;
		else if (arr[i] == 'I' && arr[i + 1] == 'O' && arr[i + 2] == 'I')
			IOI++;
	}
	cout << JOI << '\n' << IOI;

	return 0;
}