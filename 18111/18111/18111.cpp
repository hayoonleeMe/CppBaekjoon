#include <iostream>
#include <algorithm>
using namespace std;

int G[500][500];
int N, M, B;

int main()
{
	cin >> N >> M >> B;

	int min = 257;
	int max = -1;

	for (int j = 0; j < N; ++j)
	{
		for (int i = 0; i < M; ++i)
		{
			int g;
			cin >> g;
			G[i][j] = g;

			if (g > max)
				max = g;
			if (g < min)
				min = g;
		}
	}

	int largestHeight = -1;
	int lowestTime = 2147483647;

	for (int H = min; H <= max; ++H)
	{
		int copy[500][500];
		for (int j = 0; j < N; ++j)
		{
			for (int i = 0; i < M; ++i)
			{
				copy[i][j] = G[i][j];
			}
		}

		int block = B;
		int height = H;
		int time = 0;
		bool out = false;

		// 깍기
		for (int j = 0; j < N; ++j)
		{
			for (int i = 0; i < M; ++i)
			{
				if (copy[i][j] == H)
					continue;
				else if (copy[i][j] > H)
				{
					int count = copy[i][j] - H;
					time += count * 2;
					copy[i][j] = H;
					block += count;
				}
			}
		}

		// 쌓기
		for (int j = 0; j < N; ++j)
		{
			if (out) break;

			for (int i = 0; i < M; ++i)
			{
				if (copy[i][j] == H)
					continue;
				else if (copy[i][j] < H)
				{
					int count = H - copy[i][j];

					if (block >= count)
					{
						time += count;
						copy[i][j] = H;
						block -= count;
					}
					else
					{
						out = true;
						break;
					}
				}
			}
		}

		if (out) continue;

		if (time < lowestTime)
		{
			lowestTime = time;
			largestHeight = height;
		}
		else if (time == lowestTime && height > largestHeight)
		{
			largestHeight = height;
		}
	}

	cout << lowestTime << " " << largestHeight << endl;
}