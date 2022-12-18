#include <iostream>
#include <list>
using namespace std;

class Queue
{
public:
	void push(const int& a)
	{
		_container.push_back(a);
	}

	void pop()
	{
		if (_container.empty())
		{
			cout << "-1\n";
			return;
		}
		else
		{
			front();
			_container.pop_front();
		}
	}

	void size()
	{
		cout << _container.size() << '\n';
	}

	void empty()
	{
		if (_container.empty())
			cout << "1\n";
		else
			cout << "0\n";
	}

	void front()
	{
		if (_container.empty())
		{
			cout << "-1\n";
			return;
		}

		cout << _container.front() << '\n';
	}

	void back()
	{
		if (_container.empty())
		{
			cout << "-1\n";
			return;
		}

		cout << _container.back() << '\n';
	}

private:
	list<int> _container;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Queue q;
	int N;
	cin >> N;

	while (N-- > 0)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int n;
			cin >> n;

			q.push(n);
		}
		else
		{
			if (command == "pop")
				q.pop();
			else if (command == "size")
				q.size();
			else if (command == "empty")
				q.empty();
			else if (command == "front")
				q.front();
			else if (command == "back")
				q.back();
		}
	}
}