#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long a[n+5];
    long long sum=0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
        sum+=a[i];
    if(sum<a[n-1]) cout <<"NO\n";
    else
    {
        sum+=a[n-1];
        if(sum%2==0) cout << "YES\n";
        else cout <<"NO\n";
    }
}
main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
