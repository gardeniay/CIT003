#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

ll t;
ll n, k1, k2;
ll w, b;
ll num_w, num_b;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> k1 >> k2;
		cin >> w >> b;
		num_w = k1 + k2;
		num_b = 2 * n - num_w;
		num_w /= 2, num_b /= 2;
		if (num_w >= w && num_b >= b)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}