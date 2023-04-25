#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, m, num;
char ans[100][100];

bool check(int a,int b)
{
	int flag_f = 0, flag_a = 0, flag_c = 0, flag_e = 0;
	for (int i = a; i < a+2; i++)
	{
		for (int j = b; j < b+2; j++)
		{
			if (ans[i][j] == 'f')flag_f = 1;
			else if (ans[i][j] == 'a')flag_a = 1;
			else if (ans[i][j] == 'c')flag_c = 1;
			else if (ans[i][j] == 'e')flag_e = 1;
		}
	}
	if (flag_f && flag_a && flag_c && flag_e)
	{
		return 1;
	}
	return 0;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> ans[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i + 1 > n || j + 1 > m)
			{
				continue;
			}
			if (check(i, j))
			{
				num++;
			}
		}
	}
	printf("%d", num);
	return 0;
}