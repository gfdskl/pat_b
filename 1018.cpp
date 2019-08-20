#include <bits/stdc++.h>

using namespace std;

map <char,int> p;
map <int,char> p1;

void init()
{
    p['B'] = 0;
    p['C'] = 1;
    p['J'] = 2;
    p1[0] = 'B';
    p1[1] = 'C';
    p1[2] = 'J';
    return ;
}

int judge(char a,char b)
{   
    if (a == b)
        return 0;
    else if (a == 'C')
    {
        if (b == 'J')
            return 1;
        else if (b == 'B')
            return -1;
    }
    else if (a == 'J')
    {
        if (b == 'B')
            return 1;
        else if (b == 'C')
            return -1;
    }
    else
    {
        if (b == 'J')
            return -1;
        else 
            return 1;
    }
}

int main()
{
    int n;
    int win_x,lose_x,draw;
    //int win_y,lose_y,draw;
    int win_gesture[2][3];
    init();
    memset(win_gesture,0,sizeof(win_gesture));
    win_x = lose_x = draw = 0;
    //win_y = lose_y = 0;
    cin >> n;
    while (n--)
    {
        char a,b;
		cin >> a >> b;
        int k = judge(a,b);
        if (k == 0)
        {
            draw++;
        }
        else if (k == -1)
        {
            lose_x++;
            win_gesture[1][p[b]]++;
        }
        else
        {
            win_x++;
            win_gesture[0][p[a]]++;
        }
    }
    int _max[2] = {0};
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            if (win_gesture[i][_max[i]] < win_gesture[i][j])
                _max[i] = j;
                //cout << win_gesture[i][j] << ' ';
        }
        //cout << endl;
    }
   // cout << "_max" << _max[0] << ' ' << _max[1] << endl;
    cout << win_x << ' ' << draw << ' ' << lose_x << endl;
    cout << lose_x << ' ' << draw << ' ' << win_x << endl;
    cout << p1[_max[0]] << ' ' << p1[_max[1]] << endl;
    return 0;
}
