#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t)
	{
		int R;
		cin >> R;

		string str;
		cin >> str;

		string result;

		for (char s : str)
		{
			for (int r = 0; r < R; ++r)
			{
				result.push_back(s);
			}
		}

		cout << result << endl;
	}
}