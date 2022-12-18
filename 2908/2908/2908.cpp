#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int f, s;
	cin >> f >> s;

	int rf = 0;
	int rs = 0;

	rf = 100 * (f % 10) + 10 * ((f % 100) / 10) + f / 100;
	rs = 100 * (s % 10) + 10 * ((s % 100) / 10) + s / 100;

	cout << ((rf > rs) ? rf : rs) << endl;
}