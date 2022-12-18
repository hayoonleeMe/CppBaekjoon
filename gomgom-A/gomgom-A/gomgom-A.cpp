#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;

	int N;
	cin >> N;
	while (N-- > 0)
	{
		string d;
		cin >> d;

		int x = stoi(d.substr(2, d.length() - 2));
		if (x <= 90)
			++cnt;
	}

	cout << cnt << '\n';
}
