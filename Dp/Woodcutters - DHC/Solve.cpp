#include<bits/stdc++.h>
#define FT(i,a,b) for(ll i = a;i < b;i++)
#define FTB(i,a,b) for(ll i = a;i <= b;i++)
#define FG(i,a,b) for(ll i = a;i > b;i--)
#define FGB(i,a,b) for(ll i = a;i >= b;i--)
#define ll long long
#define fi first
#define se second
#define N 100007
using namespace std;
typedef pair<ll,int> ii;
ii a[N];
ll n,res;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cin >> n;
	FTB(i,1,n) cin >> a[i].fi >> a[i].se;
	ll point = a[1].fi;
	FTB(i,1,n){
	    if (i == 1 || i == n) {
            res++;
            continue;
	    }
	    if (point < a[i].fi - a[i].se){
            res++;
            point = a[i].fi;
            continue;
	    }
	    if (a[i + 1].fi > a[i].fi + a[i].se){
            res++;
            point = a[i].fi + a[i].se;
            continue;
	    }
	    point = a[i].fi;
	}
	cout << res;
	return 0;
}
