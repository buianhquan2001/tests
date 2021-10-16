#include <iostream>
using namespace std;

    int main(){
      int t;
      cin >> t;
      while(t--){
        long long n, a, b, c, i, x;
        cin >> n ;
        a = b = c = 0 ;
        for( i = 1 ; i <= n ; i++ ){
            cin >> x ;
            if( i%3 == 1 )
              a += x ;
            if( i%3 == 2 )
              b += x ;
            if( i%3 == 0 )
              c += x ;
        }
        if( a >= b && a >= c )
          cout << "math" ;
        else if( b >= a && b >= c )
          cout << "english" ;
        else
          cout << "physics" ;
        cout << endl ;
      }
      return 0;
    }
      