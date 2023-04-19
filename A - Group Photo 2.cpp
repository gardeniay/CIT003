#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dou;

int n, w[1005], h[1005], max_h, ans = 1e9, sum_w;

bool cmp(const int& a, const int& b)
{
    return w[a] - h[a] > w[b] - h[b];
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &w[i], &h[i]);
        max_h = max({ w[i], max_h, h[i] });
        sum_w += w[i];
    }
    for (int maxh = 1; maxh <= max_h; maxh++)
    {
        int cnt = 0, update_ = sum_w;
        vector<int>ans_t;
        for (int i = 1; i <= n; i++)
        {
            if (w[i] > maxh && h[i] > maxh)
            {
                cnt = 1e9;
                break;
            }
            else if (w[i] > maxh && h[i] <= maxh)
            {
                continue;
            }
            else if (w[i] <= maxh && h[i] > maxh)
            {
                update_ += h[i] - w[i];
                cnt++;
            }
            else if (w[i] > h[i])
            {
                ans_t.push_back(i);
            }
        }
        if (cnt > n / 2)
        {
            continue;
        }
        sort(ans_t.begin(), ans_t.end(), cmp);
        for (int i = 0; i < ans_t.size() && cnt + i < n / 2; i++)
        {
            update_ += h[ans_t[i]] - w[ans_t[i]];
        }
        ans = min(ans, update_ * maxh);
    }
    printf("%d\n", ans);
    return 0;
}