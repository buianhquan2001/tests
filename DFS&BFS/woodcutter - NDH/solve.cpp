#include <bits/stdc++.h>
#define author "CODE BY KQamazing"
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie();                    \
    cout.tie()
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pld pair<ld, ld>
#define matrix vector<vector<ll>>
#define all(_) _.begin(), _.end()
#define allr(_) _.rbegin(), _.rend()
#define Unique(_) _.erase(unique(all(_)), _.end());
#define Modd (ll)(1e9 + 7)

using namespace std;

ll Multitests = 1, n, k, x, y, ans;
matrix A;
vector<ll> dis, cnt;
queue<ll> Q;

void Solve()
{
    cin >> n >> k;
    A.clear();
    A.resize(n);
    dis.assign(n, 1e9);
    cnt.assign(n, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        --x, --y;
        A[x].push_back(y);
        A[y].push_back(x);
        ++cnt[x], ++cnt[y];
    }

    for (int i = 0; i < n; i++)
        if (cnt[i] <= 1)
            dis[i] = 1, Q.push(i);

    while (Q.size())
    {
        ll u = Q.front();
        Q.pop();
        for (auto v : A[u])
        {
            cnt[v]--;
            if (cnt[v] == 1)
                dis[v] = dis[u] + 1, Q.push(v);
        }
    }
    ans = 0;
    for (auto v : dis)
        if (v > k)
            ans++;
    cout << ans << endl;
}

int main()
{
    faster;
    // freopen("test.in", "r", stdin);
    int test = Multitests ? (cin >> n).ignore(), n : 1;
    while (test--)
        Solve();
    return 0;
}