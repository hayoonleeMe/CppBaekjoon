#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long* T;
long long N, M;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	T = new long long[N + 1];

	for (int i = 0; i < N; ++i)
	{
		long long n;
		cin >> n;
		T[i] = n;
	}

	sort(T, T + N, greater<long long>());

	if (T[0] - T[1] >= M)
	{
		long long H = T[0] - M;
		cout << H << '\n';
	}
	else
	{
		long long H = 0;
		long long left = M;
		for (int i = 1; i <= N; ++i)
		{
			long long validRange;
			if (i == N)
				validRange = T[i - 1];
			else
				validRange = T[i - 1] - T[i];

			//cout << "i : " << i << " left : " << left << " VR : " << validRange << '\n';

			// 남은 범위 안에 남은 나무를 다 자를 수 있다면
			if (validRange * i >= left)
			{
				H = T[i - 1] - left / i;
				if (left % i != 0)
					--H;
				break;
			}
			else
			{
				left -= validRange * i;
			}
		}

		cout << H << '\n';
	}
}