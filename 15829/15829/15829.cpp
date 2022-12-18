#include <iostream>
#include <cmath>
using namespace std;

const int M = 1234567891;

int alp[123];
char arr[100];

long long getPow(int r, int i)
{
	int leftover = i % 10;
	long long power = pow(r, leftover);
	power %= M;
	long long powbyten = pow(r, 10);
	powbyten %= M;

	for (int k = 0; k < i / 10; ++k)
	{
		power *= powbyten;
		power %= M;
	}

	return power;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int o = 1;
	for (int i = 97; i < 123; ++i)
	{
		alp[i] = o++;
	}

	int L;
	cin >> L;
	cin >> arr;

	long long result = 0;
	for (int i = 0; i < L; ++i)
	{
		long long power = getPow(31, i);
		result += alp[int(arr[i])] * power;
		result %= M;
	}

	cout << result << '\n';
}