#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        string str;
        cin >> str;
        if (str == "0")
            break;

        if (str.length() == 1)
        {
            cout << "yes\n";
            continue;
        }

        bool isPalin = true;
        for (int i = 0; i <= str.length() / 2 - 1; ++i)
        {
            int reverseIndex = str.length() - 1 - i;
            if (str[i] != str[reverseIndex])
            {
                isPalin = false;
                break;
            }
        }
        if (isPalin)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}