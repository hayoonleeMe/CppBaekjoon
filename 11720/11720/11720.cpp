#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        char c = cin.get();

        if (c == '\n')
            c = cin.get();

        total += c - 48;
    }

    cout << total << endl;
}