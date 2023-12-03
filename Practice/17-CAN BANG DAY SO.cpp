#include <bits/stdc++.h>
using namespace std;

int solve(long long int a[], int n){
	long long int sum[n+1];
	sum[0]=0;
	for (int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i-1];
	}
//am+...+an = sum[n+1]-sum[m]
 //-7  1  5 2 -4  3 0
 //-7 -6 -1 1 -3  0 0
	for (int i=1;i<n-1;i++){
		long long int a=sum[i]-sum[0];
		long long int b=sum[n]-sum[i+1];
		if (a==b) return i+1;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n];
		for (int i=0;i<n;i++) cin>>a[i];
//		cout<<solve(a,n)<<"\n";
		int index=solve(a,n);
		if (index==-1) cout<<"-1\n";
		else cout<<index<<"\n";
	}
}
