#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	M -= 45;
	if (M < 0)
	{
		H = (H == 0) ? 23 : H - 1;
		M = M + 60;
	}

	cout << H << " " << M << endl;
}