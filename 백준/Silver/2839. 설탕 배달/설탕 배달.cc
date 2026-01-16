#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int five_cnt, three_cnt;
    five_cnt = N / 5;
    while (1)
    {
        if (five_cnt < 0)
        {
            cout << "-1";
            return 0;
        }
        if ((N - (5 * five_cnt)) % 3 == 0)
        {
            three_cnt = (N - (5 * five_cnt)) / 3;
            break;
        }
        five_cnt--;
    }
    cout << five_cnt + three_cnt;
    return 0;
}