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

template <typename type>
istream &operator>>(istream &in, vector<type> &a)
{
    for (int i = 0; i < a.size(); i++)
        in >> a[i];
    return in;
}
template <typename type>
ostream &operator<<(ostream &out, const vector<type> &a)
{
    for (int i = 0; i < a.size(); i++)
        out << a[i] << " ";
    return out;
}
template <typename t1, typename t2>
istream &operator>>(istream &in, pair<t1, t2> &a)
{
    in >> a.first >> a.second;
    return in;
}

bool Multitests = 1;
ll test = 1, n, m, k, l, r, x, y;

void Solve()
{
    cin >> n >> m;
    vector<ll> k(m, 0), c(m), tmp(n);
    cin >> tmp >> c;

    for (int i = 0; i < n; i++)
        k[tmp[i] - 1]++;
    ll ans = 0;
    int ind = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < k[i]; j++)
        {
            if (c[ind] < c[i])
                ans += c[ind++];
            else
                ans += c[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    faster;

    if (Multitests)
        (cin >> test).ignore();
    while (test--)
        Solve();
    return 0;
}