#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;

	return a.length() < b.length();
}

int main()
{
	int N;
	cin >> N;

	vector<string> str;

	for (int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;

		if (find(str.begin(), str.end(), s) == str.end())
			str.push_back(s);
	}

	sort(str.begin(), str.end(), Compare);
	
	for (int i = 0; i < str.size(); ++i)
		cout << str[i] << "\n";
}
