#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int M = 1;
	int NOD = (int)::log10(N) + 1;
	if (NOD > 2)
	{
		int tenS = ::pow(10, NOD - 1);
		int temp = N - (N % tenS);
		M = temp - 10 * (NOD - 1);
	}
	
	string str = ::to_string(M);
	int t = 0;

	while (M < N)
	{
		t = M;
		for (char c : str)
			t += (int)(c - '0');

		//cout << "t : " << t << '\n';

		if (t == N)
			break;

		str = ::to_string(++M);
	}

	if (t == N)
		cout << M << '\n';
	else
		cout << "0\n";
}