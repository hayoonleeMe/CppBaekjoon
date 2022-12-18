#include <iostream>
#include <string>
using namespace std;

char clamp(int start, int end, int value)
{
	if (value >= start)
		return value;
	else
	{
		int newV = end + 1 - (start - value);
		return newV;
	}
}

// a : 97 ~ z : 122
int main()
{
	string plane, key, cipher;
	getline(cin, plane);
	cin >> key;

	int kIndex = 0;

	for (int i = 0; i < plane.length(); ++i)
	{
		if (kIndex == key.length())
		{
			kIndex = 0;
		}

		if (plane[i] == ' ')
			cipher.push_back(' ');
		else
		{
			int offset = key[kIndex] - 96;
			cipher.push_back(clamp(97, 122, plane[i] - offset));
		}

		kIndex++;
	}

	cout << cipher << endl;
}