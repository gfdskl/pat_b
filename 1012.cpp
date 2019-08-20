#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n;
	int a;
	int a3_num = 0;
	double a3;
	int flag[5] = {0};
	int A[5] = {0};
	int flag1 = 0;
	cin >> n;
	while (n--)
	{
		cin >> a;
		if (a%5 == 0)
		{
			if (a%2 == 0)
			{
				flag[0] = 1;
				A[0] = A[0]+a;
			}
		}
		else if (a%5 == 1)
		{
			flag[1] = 1;
			if (flag1)
			{
				A[1] = A[1]-a;
				flag1 = 0;
			}
			else
			{
				A[1] = A[1]+a;
				flag1 = 1;
			}
		}
		else if (a%5 == 2)
		{
			flag[2] = 1;
			A[2]++;
		}	
		else if (a%5 == 3)
		{
			flag[3] = 1;
			A[3] = A[3]+a;
			a3_num++;
		}
		else
		{
			flag[4] = 1;
			A[4] = max(A[4],a);
		}
		if (flag[3])
			a3 = A[3]*1./a3_num;
	} 
	if (flag[0])
		cout << A[0] << ' ';
	else
		cout << "N ";
	if (flag[1])
		cout << A[1] << ' ';
	else
		cout << "N ";
	if (flag[2])
		cout << A[2] << ' ';
	else
		cout << "N ";
	if (flag[3])
		cout << setprecision(1) << fixed << a3 << ' ';
	else
		cout << "N ";
	if (flag[4])
		cout << A[4] << endl;
	else
		cout << "N\n";
	return 0;
}
