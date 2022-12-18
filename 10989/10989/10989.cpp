#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int arr[10001] = { 0, };

	for (int i = 0; i < N; ++i)
	{
		short n;
		cin >> n;
		++arr[n];
	}

	for (int i = 1; i <= 10000; ++i)
	{
		if (arr[i] == 0)
			continue;

		for (int j = 0; j < arr[i]; ++j)
		{
			cout << i << '\n';
		}
	}
}