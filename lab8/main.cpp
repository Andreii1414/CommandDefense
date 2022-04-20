#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <vector>

using namespace std;

typedef pair<string, int> pd;

struct Comp {
	string comp(string a, string b)
	{
		for (int i = 0; i < a.size(); i++)
			for (int j = 0; j < b.size(); j++)
				if (a[i] < b[j]) return a;
				else return b;
	}
	bool operator()(pair<string, int> const& a, pair<string, int> const& b)
	{
		if (a.second != b.second)
			return a.second < b.second;
		else if (comp(a.first, b.first) == a.first)
			return 0;
		else return 1;
	}
};

int main()
{
	ifstream f("text.txt");
	string text;
	map<string, int>m;
	while (f >> text)
	{
		if (text.find('.') != -1 || text.find(',') != -1 || text.find('?') != -1 || text.find('!') != -1 || text.find(' ') != -1)
		{
			text.erase(text.size() - 1);
		}
		string::iterator it = text.begin();
		while (it != text.end())
		{
			if ((char)*it >= 65 && (char)*it <= 90)
				*it = *it + 32;
			++it;
		}
		m[text]++;
	}

	map<string, int>::iterator it;
	priority_queue<pd, vector<pd>,Comp> queue;

	for (it = m.begin(); it != m.end(); ++it)
	{
		queue.push(make_pair(it->first,it->second));
	}

	while (!queue.empty())
	{	
		cout << queue.top().first << " => " << queue.top().second << endl;
		queue.pop();
	}
}

