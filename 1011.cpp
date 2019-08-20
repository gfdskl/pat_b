#include <bits/stdc++.h>

using namespace std;



int main()
{
	int t;
	long long a,b,c;
	int sub = 1;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if (a+b > c)
			cout << "Case #" << sub++ << ": true\n";
		else
			cout << "Case #" << sub++ << ": false\n";
	}	
	return 0;
}
