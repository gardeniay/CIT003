#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int t, n;
char s[150000];
int My_left, My_right, ans;

int dfs(int l, int r, char c) 
{
	if (l == r)
	{
		return s[l] != c;
	}

	int My_left = 0, My_right = 0, mid = (l + r) / 2;

	for (int i = l; i <= mid; i++)
	{
		if (s[i] != c) My_left++;
	}

	for (int i = mid + 1; i <= r; i++)
	{
		if (s[i] != c) My_right++;
	}

	My_left += dfs(mid + 1, r, c + 1);
	My_right += dfs(l, mid, c + 1);

	return min(My_left, My_right);
}
 
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		scanf("%s", s + 1);
		printf("%d\n", dfs(1, n, 'a'));
	}
	return 0;
}