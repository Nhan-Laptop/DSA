#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e6+1;
ll randint(ll l,ll r){
	ll res=0;
	for(int i=1;i<=4;i++)res=(res<<15)^(rand()&(1<<15)-1);
	return l+res%(r-l+1);	
}
int main(){
	freopen("test2.inp","w",stdout);
	srand(time(nullptr));
	ll n=randint(1,1e6);
//	ll k=randint(1,n);
//	cout<<n<<" "<<k<<endl;
	for(int i = 1; i <= 1e6; i++){
		cout<< 1e6+1 - i<< " ";
	}
	
}
