#include<bits/stdc++.h>
 
using namespace std;

int find_exponent(float x) {
	int exponent = 0;
	while (x > 1) {
		x /= 2;
		exponent++;
	}
	
	return exponent;
}
 
void solve() {
	int n, res = 0;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i < n; i++) {
		float x = (float)max(a[i], a[i - 1]) / min(a[i], a[i - 1]);
		int t = find_exponent(x);
		int add_times = t - (t >= 1);
		res += add_times;
	}
	
	cout << res << endl;
	
	return ;
}
 
int main() {
	int botest;
	cin >> botest;
	while(botest--) {
		solve();
	}
	
    return 0;
}
