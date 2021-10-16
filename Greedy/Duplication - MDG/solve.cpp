#include<bits/stdc++.h>
using namespace std;
long long demo;
long long quaylui(long long n, long long k, long long dem){
	if(k == n / 2 + 1){
		return (dem+1) % 2;
	} 
	else{
		demo--;
		if(k <= n / 2) return quaylui(n/2, k, dem-1);
		else if(k > n / 2 + 1) return quaylui(n/2, k - n/2 - 1, dem-1);
	}
}
void solve(){
	long long n, k, s = 1;
	cin>>n>>k;
	demo = n;
	for(long long i = 2; i <= n; i++) s = s * 2 + 1;
	cout<<quaylui(s, k, n);
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}
