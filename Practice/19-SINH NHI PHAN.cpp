#include <bits/stdc++.h>
using namespace std;

void Try(int i, int n, int a[]){
	if (i==n){
		for (int k=0;k<n;k++){
			cout<<a[k];
		}
		cout<<" ";
	}
	else{
		for (int j=0;j<=1;j++){
			a[i]=j;
			Try(i+1,n,a);
		}		
	}	
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		Try(0,n,a);
		cout<<"\n";
	}
}
