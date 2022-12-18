#include <iostream>
using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;
	int count = 1;

	V -= A;
	if (V > 0)
	{
		int remain = V % (A - B);
		count += V / (A - B);
		if (remain > 0)
			count++;
	}

	cout << count << endl;
}