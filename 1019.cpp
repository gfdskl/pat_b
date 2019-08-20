/*
tips
1.注意处理6174
2.注意输出格式，而且要处理少于4位数时的数字
*/ 
#include <bits/stdc++.h>

using namespace std;

int new_number(int x)
{
    int ws[4];
    int sub = 0;
    while (x)
    {
        ws[sub++] = x%10;
        x /= 10;
    }
    while (sub < 4)
    	ws[sub++] = 0;
    sort(ws,ws+4);
    int large_x,small_x;
    large_x = small_x = 0;
    for (int i = 0;i < 4;i++)
    {
        large_x += ws[i]*pow(10,i);
        small_x += ws[i]*pow(10,3-i);
    }
    cout << setw(4) << setfill('0') << large_x << " - " << setw(4) << setfill('0') << small_x << " = " << setw(4) << setfill('0') << large_x-small_x << endl;
    return large_x-small_x;
}

bool issame(int x)
{
    int ws[4];
    int sub = 0;
    while (x)
    {
        ws[sub++] = x%10;
        x /= 10;
    }
    while (sub < 4)
    	ws[sub++] = 0;
    if (ws[0] == ws[1] && ws[1] == ws[2] && ws[2] == ws[3])
        return true;
    return false;
}

void deal(int x)
{
    if (issame(x))
    {
		cout << x << " - " << x << " = 0000\n";
    }
    else
    {
        int tmp = x;
        if (x == 6174)
        	tmp = new_number(tmp);
        else
        {
	        while (tmp != 6174)
	        {
				tmp = new_number(tmp);
	        }
		}
        
    }
    return ;
}

int main()
{
	int x;
    cin >> x;
	deal(x);
	return 0;
}
