#include <iostream>
#include <list>
#include <string>
using namespace std;

const string MAIN = "ChongChong";

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	list<string> ps;
	int cnt = 0;

	int N;
	cin >> N;

	while (N-- > 0)
	{
		string a, b;
		cin >> a >> b;

		if (a == MAIN)
		{
			cnt += 2;
			ps.push_back(b);
		}
		else if (b == MAIN)
		{
			cnt += 2;
			ps.push_back(a);
		}

		if (cnt == 0)
			continue;
		else
		{

		}
	}
}