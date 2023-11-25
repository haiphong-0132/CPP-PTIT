#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
<<<<<<< HEAD
	while(t--){
		cin.ignore();
=======
	cin.ignore();
	while(t--){
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
		string name;
		getline(cin,name);
		int n;
		cin>>n;
<<<<<<< HEAD
		long long int trans=0,temp;
		for (int i=0;i<n;i++){
			cin>>temp;
			if (temp<0) trans-=temp;
		}
		if (trans>=100000000) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
=======
		cin.ignore();
		long long int trans=0,temp;
		for (int i=0;i<n;i++){
			cin>>temp;
			if (temp<0) trans+=temp;
		}
		if (trans<=-100000000) cout<<"YES\n";
		else cout<<"NO\n";
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
		
	}
}
