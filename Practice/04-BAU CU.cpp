#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[m];
	for (int i=0;i<n;i++) a[i]=0;
	for (int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a[temp]++;
	}
	int pmax=*max_element(a,a+m);
	int pmax2=-1,index=-1;
	for (int i=0;i<m;i++){
		if (pmax2<a[i]&&a[i]<pmax){
			if (a[i]!=0){
				pmax2=a[i];
				index=i;
			}
		}
	}
	if (pmax2==-1||index==-1){
		cout<<"NONE";
	}
	else cout<<index;
}
