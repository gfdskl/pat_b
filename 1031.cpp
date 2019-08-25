#include <bits/stdc++.h>

using namespace std;

int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
map <int,char> p;

void init()
{
	p[0] = '1';
	p[1] = '0';
	p[2] = 'X';
	p[3] = '9';
	p[4] = '8';
	p[5] = '7';
	p[6] = '6';
	p[7] = '5';
	p[8] = '4';
	p[9] = '3';
	p[10] = '2';
	return;
}

bool isok(char* s)
{
	int z = 0;
	for (int i = 0;i < strlen(s)-1;i++)
	{
		z += weight[i]*(s[i]-'0');
	}
	z %= 11;
	//cout << "p[z]:" << p[z] << endl;
	if (p[z] == s[strlen(s)-1])
		return true;
	return false;
}

int main()
{
	init();
	int n;
	int flag = 1;
	cin >> n;
	char s[20];
	for (int i = 0;i < n;i++)
	{
		cin >> s;
		if (!isok(s))
		{
			cout << s << endl;
			flag = 0;
		}
	}
	if (flag)
		cout << "All passed\n";
	return 0;
} 
