#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int hight = 10;
    string str;
    cin >> str;

    for (int i = 1; i < str.size(); i++) {
        if (str[i - 1] == str[i])
            hight += 5;
        else
            hight += 10;
    }
    cout << hight;

    return 0;
}
