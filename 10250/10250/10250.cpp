#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, H, W, N;
	cin >> T;

	while (T-- > 0)
	{
		cin >> H >> W >> N;

		int count = 1;
		while (true)
		{
			if (H >= N)
			{
				int result = N * 100 + count;
				cout << result << '\n';
				break;
			}
			else
			{
				N -= H;
				count++;
			}
		}
	}
}