//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=959
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fuck();
long long inv(ll);
bool xd(ll);
int main(){
	int n;
	scanf("%d",&n);
	while(n--) fuck();
	return 0;
}
void fuck(){
	ll n,cont=0;
	scanf("%lld",&n);
	while(!xd(n)){
		cont++;
		n+=inv(n);
	}
	cout<<cont<<" "<<n<<endl;
}
ll inv(ll n){
	int x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
bool xd(ll n){
	return n==inv(n);
}
