///注意特殊情况特殊处理，a = b = 0 
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

stack <int> s;

void deal(ll x,ll p)
{
	while (x)
	{
		s.push(x%p);
		x /= p;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return ;
}

int main()
{
	ll a,b;
	ll d;
	ll sum;
	cin >> a >> b >> d;
	sum = a+b;
	if (sum == 0)
		cout << "0\n";
	else
		deal(sum,d);
	return 0;
}
