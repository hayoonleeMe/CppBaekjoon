#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<int, string> numKey;
	map<string, int> strKey;

	for (int i = 1; i <= N; ++i)
	{
		string str;
		cin >> str;
		numKey.insert(make_pair(i, str));
		strKey.insert(make_pair(str, i));
	}

	for (int i = 0; i < M; ++i)
	{
		string str;
		cin >> str;
		if (isdigit(str[0]) != 0)
		{
			// 포켓몬 번호
			cout << numKey[atoi(str.c_str())] << '\n';
		}
		else
		{
			// 포켓몬 이름
			cout << strKey[str] << '\n';
		}
	}
}