#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, m, ans[10000];
int nums,nums_a;

int cmp(int a, int b)
{
	return a < b;
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &ans[i]);
	}
	sort(ans + 1, ans + n + 1, cmp);
	for (int i = n; i >= 1; i--)
	{
		nums += ans[i];
		nums_a++;
		if (nums >= m)
		{
			printf("%d", nums_a);
			return 0;
		}
	}
}