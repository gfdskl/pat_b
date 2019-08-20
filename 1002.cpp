#include <bits/stdc++.h>

using namespace std;

map <int,string> p;

void init()
{
	p[0] = "ling";
	p[1] = "yi";
	p[2] = "er";
	p[3] = "san";
	p[4] = "si";
	p[5] = "wu";
	p[6] = "liu";
	p[7] = "qi";
	p[8] = "ba";
	p[9] = "jiu";
	return ;
}

int main()
{
	init();
	string s;
	while (cin >> s)
	{
		int sum = 0;
		for (int i = 0;i < s.length();i++)
			sum = sum+s[i]-'0';
		int pp[10];
		int sub = 0;
		while (sum)
		{
			pp[sub++] = sum%10;
			sum /= 10;
		}
		for (int i = sub-1;i > 0;i--)
			cout << p[pp[i]] << ' ';
		cout << p[pp[0]] << endl;
	}
	return 0;
 } 
