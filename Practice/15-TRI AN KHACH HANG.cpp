#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string name;
		getline(cin,name);
		int n;
		cin>>n;
		cin.ignore();
		long long int trans=0,temp;
		for (int i=0;i<n;i++){
			cin>>temp;
			if (temp<0) trans+=temp;
		}
		if (trans<=-100000000) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
}
