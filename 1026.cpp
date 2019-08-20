#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c1,c2;
	double interval;
	int precise;
	int h,m,s;
	cin >> c1 >> c2;
	interval = (c2-c1)/100.0;
	precise = int(interval+0.5);
	h = precise/3600;
	m = (precise-h*3600)/60;
	s = precise-h*3600-m*60;
	cout << setw(2) << setfill('0') << h << ':';
	cout << setw(2) << setfill('0') << m << ':';
	cout << setw(2) << setfill('0') << s << '\n';
	return 0;
}

