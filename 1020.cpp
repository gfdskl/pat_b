#include <bits/stdc++.h>

using namespace std;

typedef struct moon_cake{
    double num;
    double price;
    double _price;
}mc;
mc bing[1005];

bool cmp(mc a,mc b)
{
    return a._price > b._price;
}

int main()
{
	int n;
	double d;
    double profit = 0;
    cin >> n >> d;
    for (int i = 0;i < n;i++)
        cin >> bing[i].num;
    for (int i = 0;i < n;i++)
    {
        cin >> bing[i].price;
        bing[i]._price = bing[i].price/bing[i].num;
    }
    sort(bing,bing+n,cmp);
    for (int i = 0;i < n;i++)
    {
        if (d > bing[i].num)
        {
            profit += bing[i].price;
            d -= bing[i].num;
        }
        else if (d > 0)
        {
            profit += d*bing[i]._price;
            d = 0;
        }
        else 
            break;
    }
    cout << fixed << setprecision(2) << profit << endl;
	return 0;
}
