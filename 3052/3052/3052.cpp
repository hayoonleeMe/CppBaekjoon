#include <iostream>
using namespace std;

int main()
{
    int mod[42] = { 0, };
    for (int i = 0; i < 10; ++i)
    {
        int t;
        cin >> t;
        t %= 42;
        mod[t]++;
    }

    int count = 10;
    for (int i = 0; i < 42; ++i)
    {
        if (mod[i] == 0)
            continue;

        if (mod[i] > 1)
            count -= mod[i] - 1;
    }

    cout << count << endl;
}