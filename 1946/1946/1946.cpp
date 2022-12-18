#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;

int main()
{
	P arr[100000];
	int T, N, d, i;

	scanf("%d", &T);
	for (int t = 0; t < T; ++t)
	{
		scanf("%d", &N);
		for (int n = 0; n < N; ++n)
		{
			scanf("%d %d", &d, &i);
			arr[n].first = d;
			arr[n].second = i;
		}	// 여기까지 입력 끝
		
		sort(arr, arr + N);

		int count = 1;
		int passRank = arr[0].second;

		for (int i = 1; i < N; ++i)
		{
			if (arr[i].second < passRank)
			{
				count++;
				passRank = arr[i].second;
			}
		}

		printf("%d\n", count);
	}
}