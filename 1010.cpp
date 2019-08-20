#include <bits/stdc++.h>

using namespace std;

struct polyn{
	int exp;
	int coe;
}input[1000],tmp[1000],ans[1000];



int main()
{
	int a,b;
	int sub,sub1,sub2;
	sub = sub1 =sub2 = 0;
	while (!(cin >> a >> b).eof())
	{
		input[sub].coe = a;
		input[sub++].exp = b;
	}
	for (int i = 0;i < sub;i++)
	{
		if (!input[i].exp)
		{
			tmp[sub1++].coe = input[i].coe*input[i].exp;
			tmp[sub1++].exp = input[i].exp-1;
		}
	}
	int i = 0;
	while (i < sub1-1)
	{
		ans[sub2].coe = tmp[i].coe;
		ans[sub2].exp = tmp[i].exp;
		if (tmp[i].exp == tmp[i+1].exp)
		{
			while (i < sub-1 && tmp[i].exp == tmp[i+1].exp)
			{
				ans[sub2].coe = ans[sub2].coe+tmp[i+1].coe;
				i++;
			}
		}
		sub2++;
		i++;
	}
	if (!sub2)
		cout << "0 0\n";
	else
	{
		for (int i = 0;i < sub2-1;i++)
			cout << ans[i].coe << ' ' << ans[i].exp << ' ';
		cout << ans[sub2-1].coe << ' ' << ans[sub2-1].exp << endl;
	 }  
	return 0;
}
