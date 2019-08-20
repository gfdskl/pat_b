#include <bits/stdc++.h>

using namespace std;

string s;
int ans;

bool deal()
{
	int subp,subt;
	subp = subt = -1;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T')
		{
			//cout << "break1\n";
			return false;
		}
			
		if (s[i] == 'P')
		{
			if (subp != -1)
			{
				//cout << "break2\n";
				return false;
			}
			subp = i;
		}
		else if (s[i] == 'T')
		{
			if (subt != -1)
			{
				//cout << "break3\n";
				return false;	
			}	
			subt = i;
		}
	}
	if (subp == -1 || subt == -1)
	{
		//cout << "break4\n";
		return false;
	}
	int x = subp;
	int y = subt-subp-1;
	int z = s.length()-subt-1;
	if (!(x >= 0 && y >  0 && z >= 0))
		return false;
	if (z != y*x)
	{
		//cout << "break6\n";
		return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (deal())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
