#include <bits/stdc++.h>

using namespace std;

map <char,string> p;

void init()
{
	p['A'] = "MON";
	p['B'] = "TUE";
	p['C'] = "WED";
	p['D'] = "THU";
	p['E'] = "FRI";
	p['F'] = "SAT";
	p['G'] = "SUN";
}


int main()
{
	char s[4][65];
	string date;
	int minlen1,minlen2;
	int hour,second;
	int j,k;
	int flag = 0;
	init();
	for (int i = 0;i < 4;i++)
		cin >> s[i];
	minlen1 = min(strlen(s[0]),strlen(s[1]));
	minlen2 = min(strlen(s[2]),strlen(s[3]));
	for (j = 0;j < minlen1;j++)
	{
		if (flag == 0)
		{
			if (s[0][j] == s[1][j] && s[0][j] >= 'A' && s[0][j] <='G')
			{
				date = p[s[0][j]];
				flag++;
			}
		}
		else if (flag == 1)
		{
			if (s[0][j] == s[1][j])
			{
				if (s[0][j] >= '0' && s[0][j] <= '9')
				{
					hour = s[0][j]-'0';
					break;
				}
				else if (s[0][j] >= 'A' && s[0][j] <= 'N')
				{
					hour = s[0][j]-'A'+10;
					break;
				}
			}
		}
	}
	for (k = 0;k < minlen2;k++)
	{
		if (s[2][k] == s[3][k] && (s[2][k] >= 'A' && s[2][k] <= 'Z' || s[2][k] >= 'a' && s[2][k] <= 'z'))
		{
			second = k;
			break;
		}
	}
	//cout << "hour" << hour << endl << "second" << second << endl;
	cout << date << ' ';
	cout << setfill('0') << setw(2) << hour << ':';
	cout << setfill('0') << setw(2) << second << endl; 
	return 0;
}
