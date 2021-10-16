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
bool MultiTest = true;
int test = 1;
ll n, L, R;
vector <int> primeList = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
/*Function*/
void init(){
    cin >> R;
    L--;
    cin >> n;
}
void calCombSum(vector <int> prime, int i, int step, int deg, ll base, ll tmp, ll& res){
    for(; i<prime.size(); i++){
        tmp *= (ll)prime[i];
        if(step + 1 == deg)
            res += base/tmp;
        else
            calCombSum(prime, i+1, step + 1, deg, base, tmp, res);
        tmp /= (ll)prime[i];
    }
}
void solve(){
    vector <int> prime(primeList.begin(), ++lower_bound(all(primeList), n));
    if(prime.back() > n)
        prime.pob();
    ll X = R;
    for(int i=1; i<=sz(prime); i++){
        ll tmp = 0;
        calCombSum(prime, 0, 0, i, R, 1, tmp);
        if(i&1) tmp *= -1;
        X += tmp;
    }
    ll Y = L;
    for(int i=1; i<=sz(prime); i++){
        ll tmp = 0;
        calCombSum(prime, 0, 0, i, L, 1, tmp);
        if(i&1) tmp *= -1;
        Y += tmp;
    }
    cout << X - Y;
}

/*Main program*/
int main(){
    IOS(false);
    while(true){
        ll tmp;
        cin >> tmp;
        if(tmp == -1)   break;
        L = tmp;
        init();
        solve();
        cout << endl;
    }
    return 0;
}