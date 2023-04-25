#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int m, n, cnt;
char aim_paper[1050][1050];
char paper[1050][1050];
int dx[8] = { 1,1,-1,-1,0,0,1,-1 };
int dy[8] = { 1,-1,1,-1,1,-1,0,0 };

bool check()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (aim_paper[i][j] != paper[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> aim_paper[i][j];
			paper[i][j] = '.';
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int flag = 0;
			for (int k = 0; k < 8; k++)
			{
				int a = i + dx[k];
				int b = j + dy[k];
				if (a<1 || a>n || b<1 || b>m)
				{
					flag = 1;
					break;
				}
				if (aim_paper[a][b] != '#')
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
			{
				continue;
			}
			else
			{
				for (int k = 0; k < 8; k++)
				{
					int a = i + dx[k];
					int b = j + dy[k];
					paper[a][b] = '#';
				}
			}
		}
	}
	if (check())
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}