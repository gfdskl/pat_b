/*
该问题可以简化为一个集合与另一个集合的差集，
由于STL中的set会自动对元素进行排序，所以不能
直接利用set。
思路：将第二个字符串的元素放入s集合中，对第一个
字符串的每个元素判断是否在s集合中首次出现（该操作
需要借助另一个集合s1判断是否为首次出现），然后放入
queue中，最后将队列中的元素取出即可。
*/ 
#include <bits/stdc++.h>

using namespace std;

set <char> s;
queue <char> q;
set <char> s1;

void change(char *ch)
{
	for (int i = 0;i < strlen(ch);i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i]-32;
		s.insert(ch[i]);
	}
	return ;
}

int main()
{
	char ch1[100],ch2[100];
	set <char>::iterator it;
	cin >> ch1 >> ch2;
	change(ch2);
	for (int i = 0;i < strlen(ch1);i++)
	{
		if (ch1[i] >= 'a' && ch1[i] <= 'z')
			ch1[i] = ch1[i]-32;
		if (s.find(ch1[i]) == s.end() && s1.find(ch1[i]) == s1.end())
		{
			q.push(ch1[i]);
			s1.insert(ch1[i]);
		}
	}
	while (!q.empty())
	{
		char p = q.front();
		q.pop();
		cout << p;
	}
	cout << endl;
}
