#include <iostream>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int, int> P;

int main()
{

	int T;
	cin >> T;
	while (T-- > 0)
	{
		priority_queue<int> priority;
		queue<P> pq;
		int N, M;
		cin >> N >> M;
		for (int i = 0; i < N; ++i)
		{
			int n;
			cin >> n;
			priority.push(n);
			pq.push(P(n, i));
		}

		int cnt = 0;
		int pri = 0;
		while (true)
		{
			pri = priority.top();

			P temp = pq.front();
			//cout << "highest : " << pri << " temp : " << temp.first << '\n';
			if (temp.first == pri)
			{
				pq.pop();
				priority.pop();
				++cnt;
				//cout << "temp pop\n";

				if (temp.second == M)
					break;
			}
			else
			{
				pq.pop();
				pq.push(temp);
				//cout << "move temp to back\n";
			}
		}

		cout << cnt << '\n';
	}
}