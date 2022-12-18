#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<double> scores;

	double LS = -1;
	for (int i = 0; i < N; ++i)
	{
		double n;
		cin >> n;
		scores.push_back(n);

		if (n > LS)
			LS = n;
	}

	double total = 0;
	for (int i = 0; i < N; ++i)
	{
		scores[i] = scores[i] / LS * 100;
		total += scores[i];
	}

	double avg = total / N;
	printf("%f\n", avg);
}