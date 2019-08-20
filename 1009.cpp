#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int sub = 0;
	int k = 0;
	char s[100][100]={""};
	gets(str);
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] != ' ')
			s[sub][k++] = str[i];
		else
		{
			s[sub++][k] = '\0';
			k = 0;
		}
	}
	s[sub][k] = '\0';
	for (int i = sub;i > 0;i--)
		printf ("%s ",s[i]);
	printf ("%s\n",s[0]);
	return 0;
}
