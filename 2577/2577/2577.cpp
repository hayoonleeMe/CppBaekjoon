#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int n = a * b * c;
	string arr = to_string(n);

	map<int, int> m;

	for (int i = 0; i < arr.length(); ++i)
	{
		if (m.find(arr[i] - '0') == m.end())
		{
			m.insert({ arr[i] - '0', 1 });
		}
		else
		{
			m[arr[i] - '0']++;
		}
	}

	for (int i = 0; i <= 9; ++i)
	{
		if (m.find(i) == m.end())
			cout << 0 << endl;
		else
			cout << m[i] << endl;
	}
}