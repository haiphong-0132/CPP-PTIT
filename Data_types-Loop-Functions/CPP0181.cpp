#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll ucln(ll a, ll b){
	return b==0 ? a:ucln(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,x,y;
		cin>>a>>x>>y;
		for (ll i=0;i<ucln(x,y);i++) cout<<a;
		cout<<"\n";
	}
}

