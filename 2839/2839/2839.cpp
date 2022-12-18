#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int N = n;
	int result = 0;

	if (N == 4)
	{
		cout << "-1\n";
		return 0;
	}

	result = N / 5;
	N %= 5;

	if (N == 4)
	{
		result--;
		N += 5;
	}

	bool three = false;
	while (true)
	{
		//cout << "N : " << N << " result : " << result << endl;
		if (N == 0)
			break;

		if (N / 3 > 0)
		{
			N -= 3;
			result++;

			if (three && N / 3 == 0)
				break;
		}
		else if (!three)
		{
			N += 5;
			result--;

			if (N == n)
				three = true;
		}
	}

	if (N > 0 && N / 3 == 0)
	{
		N = n;
		result = N / 3;
		N %= 3;
	}

	if (N == 0)
		cout << result << '\n';
	else
		cout << "-1\n";
}