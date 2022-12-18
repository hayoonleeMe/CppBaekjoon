#include <iostream>
using namespace std;

// 74233285
// 
// 0123 4567
// 7423 3285 n = 4
// 
// 01 23
// 74 23 n = 2
// 12 34
// 42 33 n = 2
int main()
{
	string str;
	cin >> str;

	int halfN = str.length() / 2;
	
	for (int N = halfN; N > 0; --N)
	{
		for (int i = 0; i <= str.length() - 2 * N; ++i)
		{
			int left = 0;
			for (int s = i; s <= i + N - 1; ++s)
				left += (str[s] - '0');

			int right = 0;
			for (int s = i + N; s <= i + 2 * N - 1; ++s)
				right += (str[s] - '0');

			if (left == right)
			{
				cout << N * 2 << endl;
				return 0;
			}
		}
	}
	cout << 0 << endl;
}