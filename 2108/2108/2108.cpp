#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second != b.second)
		return a.second > b.second;
	else
		return a.first < b.first;
}

int main()
{
	vector<int> vec;
	map<int, int> m;

	int N;
	cin >> N;

	double sum = 0;

	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		vec.push_back(n);
		sum += n;

		if (m.find(n) == m.end())
		{
			m.insert(pair<int, int>(n, 1));
		}
		else
			m[n]++;
	}

	// »ê¼úÆò±Õ
	double dAvg = sum / N;
	if (dAvg < 0)
		dAvg -= 0.5;
	else
		dAvg += 0.5;
	int avg = (int)dAvg;
	cout << avg << '\n';

	// Áß¾Ó°ª
	sort(vec.begin(), vec.end());
	cout << vec[N / 2] << '\n';

	// ÃÖºó°ª
	vector<pair<int, int>> Mode(m.begin(), m.end());
	sort(Mode.begin(), Mode.end(), compare);

	if (Mode.size() == 1)
		cout << Mode[0].first << '\n';
	else
	{
		int lastSecond = Mode[0].second;

		if (Mode[1].second == lastSecond)
		{
			cout << Mode[1].first << '\n';
		}
		else
		{
			cout << Mode[0].first << '\n';
		}
	}

	// ¹üÀ§
	int l = vec[N - 1];
	int s = vec[0];
	cout << l - s << '\n';
}