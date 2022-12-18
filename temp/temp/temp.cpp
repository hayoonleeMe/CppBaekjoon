#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main()
{
	map<int, queue<int>> m;

	int a = 1;
	int b = 2;
	int c = 3;

	int a_1 = 11;
	int a_2 = 21;
	int b_1 = 12;

	m[a] = a_1;
	m[a] = a_2;
	m[b] = b_1;

	for (int i = 1; i <= 3; i++)
	{
		cout << "i : " << i << '\n';
	}
}