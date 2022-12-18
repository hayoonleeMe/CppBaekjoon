#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> P;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<P> vec;

	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int a, b;
		cin >> a >> b;
		vec.push_back(P(a, b));
	}

	vector<int> degree(N);

	for (int i = 0; i < N; ++i)
	{
		P cur = vec[i];
		int d = N;

		for (int j = 0; j < N; ++j)
		{
			if (i == j)
				continue;

			P it = vec[j];

			if (cur.first > it.first && cur.second > it.second)
			{
				--d;
			}
			else if ((cur.first >= it.first && cur.second <= it.second)
				|| (cur.first <= it.first && cur.second >= it.second))
			{
				--d;
			}
		}

		degree[i] = d;
	}

	for (int i = 0; i < N; ++i)
		cout << degree[i] << " ";
	cout << '\n';
}
