#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s[300] = { 0, };
int DC(int i)
{
	//cout << "i : " << i << ", cnt : " << cnt << '\n';

	if (i <= 0)
		return 0;

	return ::max(DC(i - 2), DC(i - 3) + s[i - 1]) + s[i];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		int n;
		cin >> n;
		s[i] = n;
	}

	cout << DC(N) << '\n';
}