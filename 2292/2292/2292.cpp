#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int current = 1;
	int cnt = 0;
	int rotStart = 2;

	while (true)
	{
		if (current == N)
			break;

		++current;

		if (current == rotStart)
		{
			++cnt;
			rotStart += cnt * 6;
		}
	}

	cout << cnt + 1 << '\n';
}