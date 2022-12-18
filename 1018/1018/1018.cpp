#include <iostream>

using namespace std;

char B[51][51];

char Color[] = {
	'W',
	'B'
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	char str[51] = "";

	for (int i = 0; i < N; ++i)
	{
		cin >> str;
		for (int j = 0; j < M; ++j)
		{
			B[i][j] = str[j];
		}
	}

	int count = 100;
	int startX = 0;
	int startY = 0;
	while (true)
	{
		if (count == 0)
			break;

		for (int c = 0; c < 2; ++c)
		{
			int tempCnt = 0;
			int CI = c;

			for (int y = startY; y < startY + 8; ++y)
			{
				for (int x = startX; x < startX + 8; ++x)
				{
					if (B[y][x] != Color[CI])
						tempCnt++;

					CI = (CI + 1) % 2;
				}
				CI = (CI + 1) % 2;
			}

			if (tempCnt < count)
				count = tempCnt;
		}

		if (startX + 8 == M && startY + 8 == N)
			break;

		if (startX + 8 == M)
		{
			startY++;
			startX = 0;
		}
		else
			startX++;
	}

	cout << count << '\n';
}