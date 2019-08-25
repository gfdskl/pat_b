#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;

int score[maxn];

int main()
{
	int n;
	int maxi,maxscore;
	int a,b;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		score[a] += b;
	}
	maxi = 0;
	maxscore = score[0];
	for (int i = 1;i < maxn;i++)
	{
		if (score[i] > maxscore)
		{
			maxscore = score[i];
			maxi = i;
		}
	}
	cout << maxi << ' ' << maxscore << endl;
	return 0;
} 
