#include <iostream>
using namespace std;
typedef pair<int, int> P;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T-- > 0)
	{
		int N;	// [0, 40]
		cin >> N;
		// 0 1
		P* arr = new P[N + 1]();
		arr[0] = P(1, 0);
		arr[1] = P(0, 1);
		for (int i = 2; i <= N; ++i)
		{
			arr[i] = P(arr[i - 2].first + arr[i - 1].first, arr[i - 2].second + arr[i - 1].second);
		}

		cout << arr[N].first << " " << arr[N].second << '\n';
	}
}