#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int M;
	cin >> M;
	vector<int> Box;
	Box.push_back(0);
	for (int i = 1; i <= N; ++i)
	{
		int a;
		cin >> a;
		Box.push_back(a);
	}
	vector<int> Book;
	Book.push_back(0);
	for (int i = 1; i <= M; ++i)
	{
		int b;
		cin >> b;
		Book.push_back(b);
	}

	int box = 1;
	int book = 1;
	while (true)
	{
		if (book > M)
			break;

		if (box > N)
			break;

		if (Box[box] - Book[book] >= 0)
		{
			Box[box] -= Book[book];
			book++;
			continue;
		}
		else 
			box++;
	}

	int result = 0;
	for (int i = 1; i <= N; ++i)
	{
		if (Box[i] != 0)
		{
			result += Box[i];
		}
	}

	cout << result << endl;
}