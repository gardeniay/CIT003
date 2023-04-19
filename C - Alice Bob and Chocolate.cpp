#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, cho_cum[100010],s[100010];

int main()
{
	int j;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &cho_cum[i]);
		s[i + 1] = s[i] + cho_cum[i];
	}
	for (j = 1; j <= n; j++)
	{
		if (2 * s[j] > s[n])break;
	}
	if (s[j] + s[j - 1] > s[n])
	{
		j--;
	}
	printf("%d %d\n", j, n - j);
	return 0;
}