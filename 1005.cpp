#include <bits/stdc++.h>

using namespace std;

set <int> s;

void deal(int n)
{
	while (n != 1)
	{
		if (n%2)
		{
			n = (3*n+1)/2;
		}
		else 
		{
			n = n/2;
		}
		s.insert(n);
	}
	return ;
}

int main()
{
	int k;
	cin >> k;
	int a[100];
	int ans[100];
	int sub = 0;
	for (int i = 0;i < k;i++)
	{
		cin >> a[i];
		deal(a[i]); 
	}
	for (int j = 0;j < k;j++)
	{
		if (s.find(a[j]) == s.end())
			ans[sub++] = a[j];
	}
	sort(ans,ans+sub);
	for (int j = sub-1;j > 0;j--)
		cout << ans[j] << ' ';
	cout << ans[0] << endl;
	return 0;
}
