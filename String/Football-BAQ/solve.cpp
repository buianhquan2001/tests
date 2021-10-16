#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	string s;
	cin >> s;
	int OK = 0;
	int count = 1;
	for (int i = 1; i < s.length();i++){
		if (s[i] != s[i - 1]) count = 1;
		else count++;
		if (count == 7){
			OK = 1;
			break;
		}
	}
	OK == 1 ? cout << "YES" << endl : cout << "NO" << endl; 
    return 0;
}
