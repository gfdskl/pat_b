/*
��������Լ�Ϊһ����������һ�����ϵĲ��
����STL�е�set���Զ���Ԫ�ؽ����������Բ���
ֱ������set��
˼·�����ڶ����ַ�����Ԫ�ط���s�����У��Ե�һ��
�ַ�����ÿ��Ԫ���ж��Ƿ���s�������״γ��֣��ò���
��Ҫ������һ������s1�ж��Ƿ�Ϊ�״γ��֣���Ȼ�����
queue�У���󽫶����е�Ԫ��ȡ�����ɡ�
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
