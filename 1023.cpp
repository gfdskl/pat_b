#include <bits/stdc++.h>

using namespace std;




int main()
{
	int a[10];
	//char num[55];
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i < 9;i++)
	{
		if (a[i])
		{
			cout << i;
			a[i]--;
			break;
		}
			
	}
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < a[i];j++)
			cout << i;
	}
	cout << endl;
	return 0;
}
