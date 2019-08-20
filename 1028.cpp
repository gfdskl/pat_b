#include <bits/stdc++.h>

using namespace std;

struct viliager{
	char name[6];
	int year;
	int month;
	int day;
}v[100005];

bool isvalue(int a,int b,int c)
{
	if (a < 1814)
	{
		//cout << "c1";
		return false;
	}	
	else if (a == 1814)
	{
		if (b < 9)
		{
			//cout << "c2";
			return false;
		}	
		else if (b == 9)
		{
			if (c < 6)
			{
				//cout << "c3";
				return false;
			}	
		}
	}
	else if (a == 2014)
	{
		if (b > 9)
		{
			//cout << "c4";
			return false;
		}
			
		else if (b == 9)
		{
			if (c > 6)
			{
				//cout << "c5";
				return false;
			}
				
		}
	}
	else if (a > 2014)
	{
		//cout << "c6";
		return false;
	}	
	return true;
} 

bool cmp(struct viliager v1,struct viliager v2)
{
	if (v1.year != v2.year)
		return v1.year < v2.year;
	else 
	{
		if (v1.month != v2.month)
			return v1.month < v2.month;
		else 
			return v1.day < v2.day;
	}
}

int main()
{
	int n;
	int sub = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		char na[6];
		int y,m,d;
		scanf ("%s%d/%d/%d",na,&y,&m,&d);
		if (isvalue(y,m,d))
		{
			strcpy(v[sub].name,na);
			v[sub].year = y;
			v[sub].month = m;
			v[sub].day = d;
			sub++;
		}
	}
	//cout << "sub:" << sub << endl;
	sort (v,v+sub,cmp);
	cout << sub << ' ' << v[0].name << ' ' << v[sub-1].name << endl;
}
