#include <bits/stdc++.h>

using namespace std;

struct student{
	string name;
	string node;
	int grade;
}stu[1000];

bool cmp (struct student s1,struct student s2)
{
	return s1.grade < s2.grade;
}

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0;i < n;i++)
			cin >> stu[i].name >> stu[i].node >> stu[i].grade;
		sort (stu,stu+n,cmp);
		cout << stu[n-1].name << ' ' << stu[n-1].node << endl;
		cout << stu[0].name << ' ' << stu[0].node << endl;
	}
	return 0;
}
