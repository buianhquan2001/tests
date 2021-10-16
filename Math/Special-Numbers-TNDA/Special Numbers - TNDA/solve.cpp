#include<cstdio>
int main(){
	long long t,n,k,s,tmp,p;
	p=1000000007;
	scanf("%lld",&t);
	while(t--){
		s=0;tmp=1;
		scanf("%lld%lld",&n,&k);
		while(k){
			s=(s+(k&1)*tmp)%p;
			k>>=1;tmp=(tmp*n)%p;
		}
		printf("%lld\n",s);
	}
}
