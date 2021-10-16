#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z >= abs(x-y) and z != 0) cout << "Unknown";
        else if(y-x>0) cout << "Dislike" ;
        else if(y-x<0) cout << "Like";
        else cout << "Same";
        cout << endl ;
    }
}