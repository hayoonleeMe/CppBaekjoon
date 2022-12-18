#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char, int> m;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i)
	{
		str[i] = tolower(str[i]);

		if (m.find(str[i]) == m.end())
		{ 
			m.insert({ str[i], 1 });
		}
		else
		{
			m[str[i]] = m[str[i]] + 1;
		}
	}

	map<char, int>::iterator largestIt = m.begin();
	for (map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		if (largestIt->second < it->second)
			largestIt = it;
	}

	for (auto it : m)
	{
		if (largestIt->first == it.first)
			continue;

		if (largestIt->second == it.second)
		{
			cout << "?" << endl;
			return 0;
		}
	}

	cout << (char)toupper(largestIt->first) << endl;
}