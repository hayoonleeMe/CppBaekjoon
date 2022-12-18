#include <iostream>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    list<int> li;

    for (int i = 1; i <= N; ++i)
        li.push_back(i);

    bool task = true;
    while (li.size() != 1)
    {
        if (task)
        {
            li.pop_front();
        }
        else
        {
            int f = li.front();
            li.pop_front();
            li.push_back(f); 
        }

        task = !task;
    }

    cout << li.front() << '\n';
}