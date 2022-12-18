#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;

	int in = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> in;
		v.push_back(in);
	}

	int max = v[0];
	int temp = v[0];

	for (int i = 1; i < n; ++i)
	{
		if (temp <= 0 && v[i] <= 0)
		{
			if (abs(temp) > abs(v[i]))
				temp = v[i];
		}
		else if (temp >= 0 && v[i] <= 0)
		{
			if (temp + v[i] <= 0)
				temp = v[i];
			else
				temp += v[i];
		}
		else if (temp <= 0 && v[i] >= 0)
		{
			temp = v[i];
		}
		else
		{
			temp += v[i];
		}

		if (temp > max)
		{
			max = temp;
		}
	}

	cout << max << endl;

	return 0;
}