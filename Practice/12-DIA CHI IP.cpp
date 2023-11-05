#include <bits/stdc++.h>
using namespace std;
int check(vector<string> s){
	if (s.size()!=4){
		return 0;
	}
	for (auto i:s){
		if (i.size()>3) return 0;
		for (auto j:i){
			if (!isdigit(j)) return 0;
		}
		int a=stoi(i);
		if (a<0||a>255) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<string> v;
		string s;
		cin >> s;
		stringstream ss(s);
		while(getline(ss,s,'.')){
			v.push_back(s);
		}
		if (check(v)) cout<<"YES\n"; else cout<<"NO\n";
	}
}
