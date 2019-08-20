#include <bits/stdc++.h>

using namespace std;

int a[100005];

int main()
{
	int n,p;
	int sub = 0;
	int maxnum = 0;
	cin >> n >> p;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	sort(a,a+n);
	while (a[sub]*p <= a[n-1])
	{
		int k = upper_bound(a,a+n,a[sub]*p)-a;
		if (maxnum < k-sub)
			maxnum = k-sub;
		sub++;
	}
	cout << maxnum << endl;
	return 0;
 } 
