/*Cre: HlighT*/
#include <bits/stdc++.h>
#define IOS(false) ios::sync_with_stdio(false)
#define tie() cin.tie(NULL)
/*Compact*/
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(Object) Object.size()
#define all(Object) Object.begin(), Object.end()
#define Re0(Object) memset(Object, 0, sizeof(Object))
#define Fu(tmp, L, R, Jump)	for(int tmp=L; tmp<R; tmp+=Jump)
#define Fd(tmp, R, L, Jump)	for(int tmp=R; tmp>=L; tmp-=Jump)
#define cinArr(Array)	for(auto &ele:Array)  cin >> ele;
#define coutArr(Array)	for(const auto &ele:Array)	cout << ele << ' ';
/*Constant*/
#define Pi atan(1)*4
#define oo INT_MAX
const int ArrLim = 1e6+5;
const int Mod = 1e9+7;
/*Declare*/
using namespace std;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;

/*Initialize*/
int n;
ll L, R;
vector <int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
vector < vector < vector <ll> > > dp;
/*Function*/
void DP(){
    dp.resize(prime.size());
    for(int i=0; i<dp.size(); i++)
        dp[i].resize(i+1);
    dp[0][0].pb(2);
    for(int i=0; i<dp.size()-1; i++){
        for(int j=0; j<dp[i].size(); j++)
            dp[i+1][j] = dp[i][j];
        dp[i+1][0].pb(prime[i+1]);
        for(int j=0; j<dp[i].size(); j++){
            for(int k=0; k<dp[i][j].size(); k++){
                dp[i+1][j+1].pb(dp[i][j][k] * prime[i+1]);
            }
        }
    }
}
ll pefMod(ll base){
    ll res = base;
    for(int i=0; i<dp[n].size(); i++){
        ll tmp = 0;
        for(int j=0; j<dp[n][i].size(); j++)
            tmp += base / dp[n][i][j];
        if(i&1) tmp *= -1;
        res -= tmp;
    }
    return res;
}

/*Main program*/
int main(){
    IOS(false);
    DP();
    while(true){
        cin >> L;
        if(L == -1) break;
        cin >> R;
        L--;
        cin >> n;
        int tmp;
        tmp = lower_bound(all(prime), n) - prime.begin();
        if(prime[tmp] > n) --tmp;
        n = tmp;
        cout << pefMod(R) - pefMod(L) << endl;
    }
    return 0;
}