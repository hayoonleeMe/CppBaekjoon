#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, string> P;

bool compare(const P& a, const P& b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<P> vec;
	while (N-- > 0)
	{
		int age;
		string name;
		cin >> age >> name;
		vec.push_back(P(age, name));
	}

	// Ű ���� ���� ���Ҹ� ������ �� ���� ������ ��Ű���� �����ϴ� ���� �˰���(merge sort�� ���)
	// ������ sort �˰����� �����ķ�, ������ �������� �ʴ´�.
	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i].first << " " << vec[i].second << '\n';
}