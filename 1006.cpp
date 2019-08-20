#include <bits/stdc++.h>

using namespace std;

string s = ""; 
map <int,string> p;

void init()
{
	p[0] = "";
	p[1] = "1";
	p[2] = "12";
	p[3] = "123";
	p[4] = "1234";
	p[5] = "12345";
	p[6] = "123456";
	p[7] = "1234567";
	p[8] = "12345678";
	p[9] = "123456789";
	return ;
}

string BS(int k,int num)
{
	string s = "";
	if (k ==2)
		for (int i = 0;i < num;i++)
			s = s+"S";
	else
		for (int i = 0;i < num;i++)
			s = s+"B";
	return s;
}

void deal(int k,int num)
{
	switch (k)
	{
		case 1:	s = s+p[num];break;
		case 2: s = BS(2,num)+s;break;
		case 3:	s = BS(3,num)+s;break;
	}	
	return ;
}

int main()
{
	int  n;
	int ws = 1;
	init();
	cin >> n;
	while (n)
	{
		int tmp = n%10;
		n /= 10;
		deal(ws++,tmp);
	}
	cout << s << endl;
	return 0;
}
