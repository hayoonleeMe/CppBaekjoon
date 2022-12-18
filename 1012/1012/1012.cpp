#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

int map[50][50] = { 0, };
bool visited[50][50] = { false, };

// 위, 오른쪽, 아래, 왼쪽
int dirX[] = { 0, 1, 0, -1 };
int dirY[] = { -1, 0, 1, 0 };

int width, height, num;

void Visit(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; ++i)
	{
		int nextX = x + dirX[i];
		int nextY = y + dirY[i];

		if (nextX < 0 || nextX > width - 1 || nextY < 0 || nextY > height - 1)
			continue;

		if (visited[nextX][nextY])
			continue;

		if (map[nextX][nextY] == 1)
			Visit(nextX, nextY);
	}
}

int main()
{
	int T;
	cin >> T;

	while (T-- > 0)
	{
		cin >> width >> height >> num;

		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));

		for (int i = 0; i < num; ++i)
		{
			int x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}

		int count = 0;
		for (int x = 0; x < width; ++x)
		{
			for (int y = 0; y < height; ++y)
			{
				if (visited[x][y])
					continue;

				if (map[x][y] == 1)
				{
					Visit(x, y);
					count++;
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}

