#include <bits/stdc++.h>

using namespace std;



int main()
{
	char num[1005];
	int a[10] = {0};
	cin >> num;
	for (int i = 0;i < strlen(num);i++)
	{
		a[num[i]-'0']++;
	}
	for (int i = 0;i < 10;i++)
	{
		if (a[i])
			cout << i << ':' << a[i] << endl;
	}
	return 0;
}
