#include <bits/stdc++.h>

using namespace std;

char num[10005];
char index[10005];
int radix;

void fetch()
{
    int sub = 0;
    int k = 0;
    int flag;
    while (num[k] != 'E')
    {
		index[sub++] = num[k++];
	}
    index[sub] = '\0';
    if (num[k+1] == '+')
        flag = 1;
    else
        flag = 0;
    k = k+2;
    int p = 0;
    while (k < strlen(num))
    {
        radix = radix*10+num[k]-'0';
        k++;
    }
    if (!flag)
        radix = -radix;
    return ;
}

void positive_number()
{
	int len_index = strlen(index);
	int point_last = len_index-3;
	if (index[0] == '-')
		printf ("-");
	if (radix >= point_last)
	{
		for (int i = 1;i < len_index;i++)
		{
			if (index[i] == '.')
				continue;
			printf ("%c",index[i]); 
		}
		for (int i = 0;i < radix-point_last;i++)
			printf ("0");
		
	}
	else
	{
		for (int i = 1;i < len_index;i++)
		{
			if (index[i] == '.')
				continue;
			printf ("%c",index[i]); 
			if (i == radix+2)
				printf (".");
		}
	}
	printf ("\n");
}

void negative_number()
{
	int len_index = strlen(index);
	if (index[0] == '-')
		printf ("-");
	printf ("0.");
	for (int i = 0;i < abs(radix)-1;i++)
		printf ("0");
	for (int i = 1;i < len_index;i++)
	{
		if (index[i] == '.')
			continue;
		printf ("%c",index[i]); 
	}
	printf ("\n");
	return ;
}

int main()
{
	scanf ("%s",num);
	fetch();
	if (radix > 0)
		positive_number();
	else if (radix < 0)
		negative_number();
	else 
		printf ("%s\n",index);
   	//cout << index << ' ' << radix << endl;
	return 0;
}
