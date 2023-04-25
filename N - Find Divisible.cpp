#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

ll t;
ll l, r;

int main()
{
	scanf("%lld", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &l, &r);
		printf("%lld %lld\n", l, l * 2);
	}
}