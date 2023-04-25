#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int t,num_r[1050];
int n, r, b;
int flag;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> r >> b;
		memset(num_r, 0, sizeof(num_r));
		int tmp = r / (b+1);
		flag = r % (b + 1);
		for (int i = 0; i < b+1; i++)
		{
			num_r[i] += tmp;
		}
		for (int i = 0; i < b+1; i++)
		{
			if (flag > 0)
			{
				num_r[i]++;
				flag--;
			}
		}
		for (int i = 0; i <= b; i++)
		{
			for (int j = 0; j < num_r[i]; j++)
			{
				printf("R");
			}
			if (i < b)
			{
				printf("B");
			}
		}
		printf("\n");
	}
	return 0;
}