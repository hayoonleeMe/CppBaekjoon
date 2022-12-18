#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//int arr[51] = {0,};
	vector<int> arr;
	arr.push_back(-1);
	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	arr[0] = 0;

	int count = 0;
	int largestIndex = 0;

	while (true)
	{
		if (N == 1)
			break;

		int LIndex = N;
		for (int i = 1; i <= N; ++i)
			if (arr[i] >= arr[LIndex])
				LIndex = i;
		largestIndex = LIndex;

		if (largestIndex == 1)
			break;

		if (arr[1] <= arr[largestIndex])
		{
			arr[1]++;
			count++;
			arr[largestIndex]--;
		}
	}
	cout << count << endl;
}