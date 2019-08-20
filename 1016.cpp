#include <bits/stdc++.h>

using namespace std;



int main()
{
	int numa,numb;
	char s1[11],s2[11];
	int d1,d2;
	int p1,p2;
	numa = numb = 0;
	p1 = p2 = 0;
	cin >> s1 >> d1 >> s2 >> d2;
	for (int i = 0;i < strlen(s1);i++)
	{
		if (s1[i] == d1+'0')
			numa++;
	}
	for (int i = 0;i < strlen(s2);i++)
	{
		if (s2[i] == d2+'0')
			numb++;
	}
	//cout << numa << ' ' << numb << endl;
	for (int i = 0;i < numa;i++)
	{
		p1 = p1+d1;
		d1*=10;
	}
	for (int i = 0;i < numb;i++)
	{
		p2 = p2+d2;
		d2*=10;
	}
	cout << p1+p2 << endl;
	return 0;
}
