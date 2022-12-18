#include <iostream>
using namespace std;

int getNum(int k, int n)
{
	if (k == 0)
	{
		return n;
	}
	else
	{
		int result = 0;
		for (int i = 1; i <= n; ++i)
		{
			result += getNum(k - 1, i);
		}
		return result;
	}
}

int main()
{
	int T;
	cin >> T;
	while (T-- > 0)
	{
		int k, n;
		cin >> k >> n;

		cout << getNum(k, n) << '\n';
	}
}