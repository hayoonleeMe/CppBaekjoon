#include <iostream>
#include <list>
using namespace std;

class Stack
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
			top();
			_container.pop_back();
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

	void top()
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

	Stack s;
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

			s.push(n);
		}
		else
		{
			if (command == "pop")
				s.pop();
			else if (command == "size")
				s.size();
			else if (command == "empty")
				s.empty();
			else if (command == "top")
				s.top();
		}
	}
}