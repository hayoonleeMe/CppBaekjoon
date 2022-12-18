#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	list<int> li;

	for (int i = 1; i <= N; ++i)
		li.push_back(i);

	list<int>::iterator eraseIt;
	int count = 1;

	cout << "<";
	for (list<int>::iterator it = li.begin(); !li.empty(); )
	{
		if (count == K)
		{
			cout << *it;
			it = li.erase(it);
			count = 1;

			if (it == li.end())
				it = li.begin();

			if (li.size() != 0)
				cout << ", ";
			else
				cout << ">\n";

			continue;
		}

		it++;
		if (it == li.end())
			it = li.begin();

		++count;
	}
}