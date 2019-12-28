//1009ï¼šéŸ©ä¿¡ç‚¹å…µ
#include<stdio.h>
#include<string.h>
int change(char a[])
{
	int len;
	int re=0;
	len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		re = re*10 + a[i]-'0';
	}
	return re;
}
int main()
{
	char ch;
	char str[1024];
	char num[300][300];
	char usenum[300][300];
	int temp;
	int i = 0, k = 0, m = 0, a = 0, max,b=0;
	int len[1024];
	int cs[300] = { 0 }, x1[300] = { 0 };
	int p = 0;
	while ((ch = getchar()) != EOF)//???¨´¨®D¡Á?¡¤?¡ä?¨¢¨¨?¡À¨º???astr 
	{
		str[i++] = ch;
		str[i] = '\0';
	}
	for (int l = 0; l < i; l++)//?????D¦Ì?¨ºy¡Á?¡ä¡é¡ä???num 
	{
		if ('0' <= str[0] && str[0] <= '9')
		{
			if ('0' <= str[l] && str[l] <= '9')
			{
				num[k][m++] = str[l];
				num[k][m] = '\0';
			}
			if ('0' <= str[l + 1] && str[l + 1] <= '9' && (str[l] < '0' || str[l]>'9'))
			{
				k++;
				m = 0;
			}
		}
		if (str[0] < '0' || str[0]>'9')
		{
			if ('0' <= str[l] && str[l] <= '9')
			{
				num[k-1][m++] = str[l];
				num[k-1][m] = '\0';
			}
			if ('0' <= str[l + 1] && str[l + 1] <= '9' && (str[l] < '0' || str[l]>'9'))
			{
				k++;
				m = 0;
			}
		}
	}
	if ('0' <= str[0] && str[0] <= '9')
	k++;
	for (int l = 0; l < k; l++)
	{
		len[l] = strlen(num[l]);
	}
	for (int l = 0; l < k; l++)//?D???aD¨º?2?¨º?????¨ºy 
	{
		p = 0;
		if (len[l] % 2 == 0&&len[l] > 1)
		{
			for (int q = 0; q < len[l] / 2; q++)
			{
				if (num[l][q] != num[l][len[l] - q - 1])
				{
					p = 1;
				}
			}
		}
		if (len[l] % 2 == 1&&len[l]>1)
		{
			for (int q = 0; q < (len[l] - 1) / 2; q++)
			{
				if (num[l][q] != num[l][len[l] - q - 1])
				{
					p = 1;
				}
			}
		}
		if (p == 0&&len[l] > 1&&num[l][0]!='0')//??¨º?????¨ºy¦Ì?¡ä¡é¡ä???usenum 
		{
			strcpy(usenum[a++], num[l]);
		}
	}
	for (int j = 0; j < a; j++)
	{
		for (int l = j; l < a; l++)
		{
			if (strcmp(usenum[j], usenum[l]) == 0)
			{
				cs[j]++;
			}
		}
	}
	max = cs[0];
	for (int j = 0; j < a; j++)
	{
		if (cs[j] >= max)
		{
			max = cs[j];
		}
	}
	for (int j = 0; j < a; j++)
	{
		if (cs[j] == max)
		{
			max = cs[j];
			x1[b++] = j;
		}
	}
	for (int j = 0; j < b; j++)
	{
		for (int l = j; l < b; l++)
		{
			if (change(usenum[x1[j]])<change(usenum[x1[l]]))
			{
				temp = x1[j];
				x1[j] = x1[l];
				x1[l] = temp;
			}

		}
	}
	for (int j = 0; j < b; j++)
	{
		printf("%s %d\n", usenum[x1[j]], cs[x1[j]]);
	}
	if (cs[0] == 0)
	{
		printf("None\n");
	}
	return 0;
}

