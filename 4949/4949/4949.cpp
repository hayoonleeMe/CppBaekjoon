#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{

	while (true)
	{
		stack<char> s;
		string str;
		getline(cin, str);

		if (str == ".")
			break;

		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == ')' || str[i] == ']')
			{
				if (s.empty())
				{
					s.push(str[i]);
					break;
				}
				else
				{
					if ((s.top() == '(' && str[i] == ')') || (s.top() == '[' && str[i] == ']'))
					{
						s.pop();
					}
					else
						break;
				}
			}
		}

		if (s.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}
}