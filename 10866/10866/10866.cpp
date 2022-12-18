#include <iostream>
#include <list>
using namespace std;

class Deque
{
public:
	void push_back(const int& a)
	{
		_container.push_back(a);
	}

	void push_front(const int& a)
	{
		_container.push_front(a);
	}

	void pop_back()
	{
		if (_container.empty())
		{
			cout << "-1\n";
			return;
		}
		else
		{
			back();
			_container.pop_back();
		}
	}

	void pop_front()
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

	Deque dq;
	int N;
	cin >> N;

	while (N-- > 0)
	{
		string command;
		cin >> command;

		if (command == "push_back")
		{
			int n;
			cin >> n;

			dq.push_back(n);
		}
		else if (command == "push_front")
		{
			int n;
			cin >> n;

			dq.push_front(n);
		}
		else
		{
			if (command == "pop_front")
				dq.pop_front();
			if (command == "pop_back")
				dq.pop_back();
			else if (command == "size")
				dq.size();
			else if (command == "empty")
				dq.empty();
			else if (command == "front")
				dq.front();
			else if (command == "back")
				dq.back();
		}
	}
}