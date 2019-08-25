//因为输入的第一个字符串可能为空串，所以需要用getline(cin,a) 

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
set <char> s;

void add(string ch)
{
	for (int i = 0;i < ch.length();i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			s.insert(ch[i]);
			s.insert(ch[i]+32);
		}
		else if (ch[i] == '+')
		{
			for (int i = 0;i < 26;i++)
			{
				char p = 'A'+i;
				s.insert(p);
			}
		}
		/*else if (ch[i] == '_')
			s.insert(' ');*/
		else 
			s.insert(ch[i]);
	}
}

void deal(string ch)
{
	for (int i = 0;i < ch.length();i++)
	{
		//cout << "i" << ' ' << i << ' ' << ch[i] << endl;
		if (s.find(ch[i]) == s.end())
			cout << ch[i];
	}
	cout << endl;
	return;
}

int main()
{
	string s1,s2;
	getline(cin,s1);
	cin >> s2;
	add(s1);
	/*
	set<char>::iterator iter;
	for (iter = s.begin();iter != s.end();iter++)
		cout << *iter << ' ';
		cout << endl;
	*/
	deal(s2);
	return 0;
} 

/*
#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
set <char> s;

void add(char* ch)
{
	for (int i = 0;i < strlen(ch);i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			s.insert(ch[i]);
			s.insert(ch[i]+32);
		}
		else if (ch[i] == '+')
		{
			for (int i = 0;i < 26;i++)
			{
				char p = 'A'+i;
				s.insert(p);
			}
		}
		else if (ch[i] == '_')
			s.insert(' ');
		else 
			s.insert(ch[i]);
	}
}

void deal(char* ch)
{
	for (int i = 0;i < strlen(ch);i++)
	{
		//cout << "i" << ' ' << i << ' ' << ch[i] << endl;
		if (s.find(ch[i]) == s.end())
			cout << ch[i];
	}
	cout << endl;
	return;
}

int main()
{
	char s1[maxn];
	char s2[maxn];
	gets(s1);
	cin >> s2;
	add(s1);
	deal(s2);
	return 0;
} 
*/
