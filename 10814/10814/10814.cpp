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

	// 키 값이 같은 원소를 정렬할 때 기존 순서를 지키도록 보장하는 정렬 알고리즘(merge sort를 사용)
	// 기존의 sort 알고리즘은 퀵정렬로, 순서를 보장하지 않는다.
	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i].first << " " << vec[i].second << '\n';
}