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

ll Multitests = 1, n;

void Solve()
{
    ld p;
    cin >> n >> p;
    for (ll i = 0; i < n; i++)
    {
        ll j = n - i;
        ll a = i * (i - 1) * (i - 2) / 6 + i * (i - 1) / 2 * j;
        ll b = j * (j - 1) / 2 * i;
        ll c = j * (j - 1) * (j - 2) / 6;
        ld prob = (a + b / (ld)(2)) / (ld)(a + b + c);
        if (prob >= p)
        {
            cout << i << endl;
            return;
        }
    }
    cout << n << endl;
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