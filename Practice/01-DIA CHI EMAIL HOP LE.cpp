#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	int count=0;
	for (int i=0;i<s.size();i++){
		if (s[i]=='@'){
			count++;
			if (count>1||count==0) return 0;	
		}
		if (!isalnum(s[i])&&s[i]!='.'&&s[i]!='_'&&s[i]!='@') return 0;
	}
	count=0; 
	int temp=0;
	int i=s.size()-1;
	if (s[i]=='.') return 0;
	while(s[i]!='@'){
		count++;
		if (count>254) return 0;
		if (s[i]=='.') temp++;
		i--;
	}
	if (temp==0) return 0;
	count=0;
	while(i){
		count++;
		if (count>64) return 0;
		i--;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		if (check(a)) cout<<"YES\n"; else cout<<"NO\n";
	}
}
