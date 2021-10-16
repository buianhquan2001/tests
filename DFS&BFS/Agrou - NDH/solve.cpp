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

ll Multitests = 1, n, m, k, l, r, x, y;
vector<vector<pll>> Adj;
vector<ll> vis;
ll C[2], ans, conflict;

void Dfs(int v)
{
    C[vis[v]]++;
    for (auto u : Adj[v])
    {
        if (vis[u.first] == -1)
        {
            vis[u.first] = vis[v] ^ u.second;
            Dfs(u.first);
        }
        else
        {
            if (vis[u.first] != vis[v] ^ u.second)
            {
                conflict = 1;
                return;
            }
        }
    }
}

void Solve()
{
    cin >> n >> m;
    Adj.clear();
    Adj.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;
        Adj[x].push_back({y, (s[0] != 'v')});
        Adj[y].push_back({x, (s[0] != 'v')});
    }
    ans = conflict = 0;
    vis.assign(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == -1)
        {
            C[0] = C[1] = 0;
            vis[i] = 0;
            Dfs(i);
            ans += max(C[0], C[1]);
        }
    }
    if (conflict)
        ans = -1;
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