#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k=n+1,a=n;
		if (a%2==0) n/=2;
		else k/=2;
		cout<<(long long int)k*n<<endl;
	}
}

