#include <bits/stdc++.h>

using namespace std;

int a[100000];
int ans[100000]={0}; 
void prime()
{
	int sub = 2;
	a[0] = 1;
	a[1] = 2;
	for (int i = 3;i <= 1e5;i++)
	{
		int j;
		for (j = 2;j <= sqrt(i);j++)
			if (i%j == 0)
				break;
		if (j > sqrt(i))
		{
			a[sub++] = i;
			if (a[sub-1] == a[sub-2]+2)
				ans[i] = ans[i-1]+1;
		}	
		else
			ans[i] = ans[i-1];
 	}
 	return ;
}

int deal(int n)
{
	int ans = 0; 
	int p = 0;
	int sub = 2;
	a[0] = 1;
	a[1] = 2;
	for (int i = 3;i <= n;i++)
	{
		int j;
		for (j = 2;j <= sqrt(i);j++)
			if (i%j == 0)
				break;
		if (j > sqrt(i))
			a[sub++] = i;
 	}
 	while (p+1 < sub)
 	{
 		if (a[p+1] == a[p]+2)
 			ans++;
 		p++;
	}
 		
	return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << deal(n) << endl;
	return 0;
}
