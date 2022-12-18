#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N;
	cin >> K >> N;

	long long* lan = new long long[K]();

	for (int i = 0; i < K; ++i)
	{
		long long l;
		cin >> l;
		lan[i] = l;
	}

	sort(lan, lan + K);

	long long offset = lan[K / 2];
	while (true)
	{
		//cout << "offset : " << offset << '\n';

		// 자른다.
		long long num = 0;
		for (int i = 0; i < K; ++i)
		{
			num += lan[i] / offset;
		}
		//cout << "num : " << num << '\n';

		if (num >= N)
		{
			break;
		}
		else
		{
			offset = lan[K - 1] / ((lan[K - 1] / offset) + 1);
		}
	}

	// 최적화
	long long limit = lan[K - 1];
	if (((lan[K - 1] / offset) - 1) > 1)
		limit = lan[K - 1] / ((lan[K - 1] / offset) - 1);

	long long start = offset;
	long long end = limit;
	long long mid = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		long long num = 0;
		for (int i = 0; i < K; ++i)
		{
			num += lan[i] / mid;
		}

		if (num >= N)
		{
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	offset = end;

	cout << offset << '\n';

	delete[] lan;
}