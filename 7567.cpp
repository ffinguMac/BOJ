#include <iostream>
#include <string>
using namespace std;

int main()
{
	string plate;
	int plate_len = 10;
	cin >> plate;
	for (int i = 0; i < plate.size(); i++)
	{
		if ((plate[i] == ')' && plate[i + 1] == '(') || (plate[i] == '(' && plate[i + 1] == ')') && i + 1 < plate.size())
			plate_len += 10;
		else if ((plate[i] == ')' && plate[i + 1] == ')') || (plate[i] == '(' && plate[i + 1] == '(') && i + 1 < plate.size())
			plate_len += 5;
	}
	cout << plate_len;

	return 0;
}
