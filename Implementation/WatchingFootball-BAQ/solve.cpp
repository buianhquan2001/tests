#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int a[n+2], OK = 0, res = 0, timeGame = 90;
	
	a[0] = 0;
	
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (OK == 0){
			if (a[i] - a[i - 1] > 15){
				res = a[i - 1] + 15;
				OK = 1;
			}
		}
	}
	if (OK) cout << res << endl;
	else if (timeGame - a[n] > 15) cout << a[n] + 15 << endl;
	else cout << 90 << endl;
	return 0;
}
