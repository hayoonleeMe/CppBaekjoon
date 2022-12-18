//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int M, N;
//	cin >> M >> N;
//
//	string result = "";
//	vector<int> prime;
//	prime.push_back(2);
//
//	for (int i = M; i <= N; ++i)
//	{
//		if (i == 1)
//			continue;
//		else if (i == 2)
//		{
//			result += "2\n";
//			continue;
//		}
//
//		bool isPrime = true;
//		for (int p : prime)
//		{
//			if (i % p == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//		if (!isPrime)
//			continue;
//
//		prime.push_back(i);
//		result += ::to_string(i) + "\n";
//	}
//
//	result.erase(result.length() - 1, result.length());
//	cout << result;
//}

// 에라토스테네스의 체
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int M, N;
	cin >> M >> N;

	bool* prime = new bool[N + 1];
	for (int i = 2; i <= N; ++i)
		prime[i] = true;

	for (int i = 2; i * i <= N; ++i)
	{
		if (i == 1)
			continue;

		if (prime[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				prime[j] = false;
			}
		}
	}

	for (int i = M; i <= N; ++i)
	{
		if (prime[i])
			cout << i << '\n';
	}
}