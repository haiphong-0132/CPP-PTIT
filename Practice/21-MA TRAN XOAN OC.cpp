#include <bits/stdc++.h>
using namespace std;

vector<int> generate_Prime(){
	vector<int>prime(5001,1);
	prime[0]=prime[1]=0;
	for (int i=2;i<=sqrt(5000);i++){
		if (prime[i]){
			for (int j=i*i;j<=5000;j+=i){
				prime[j]=0;
			}
		}
	}
	vector<int> ans;
	for (int i=0;i<5001;i++){
		if (prime[i]) ans.push_back(i);
	}
	return ans;
}

int main(){
	vector<int> prime = generate_Prime();
	int t;
	cin>>t;
	for (int p=1;p<=t;p++){
		int n;
		cin>>n;
		int a[n][n];
		int k=0,r1=0,c1=0,r2=n-1,c2=n-1;
		while(k<n*n){
			for (int i=c1; i<=c2; i++){
				a[r1][i]=prime[k];
				k++;
			}
			for (int i=r1+1; i<=r2; i++){
				a[i][c2]=prime[k];
				k++;
			}
			for (int i=c2-1;i>=c1;i--){
				a[r2][i]=prime[k];
				k++;
			}
			for (int i=r2-1;i>=r1+1;i--){
				a[i][c1]=prime[k];
				k++;
			}
			r1++;c1++;r2--;c2--;
		}
		printf("Test %d:\n",p);
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
}
