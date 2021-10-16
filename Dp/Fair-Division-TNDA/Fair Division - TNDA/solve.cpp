#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n, z, a, b;
	cin>>t;
	while(t--){
		a = b = 0;
		cin >> n;
		while(n--){
			cin >> z;
			(z==1?a++:b++);
		}
	cout << ((a%2 || (b%2 && a<2))?"NO":"YES") << endl;
	} 	
}
