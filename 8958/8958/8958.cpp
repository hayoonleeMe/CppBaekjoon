#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t)
	{
		string str;
		cin >> str;

		int conti = 0;
		int score = 0;

		for (char c : str)
		{
			if (c == 'O')
				conti++;
			else
				conti = 0;

			score += conti;
		}

		cout << score << endl;
	}
}