#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char,char> list(){
	map<char,char> m;
	char idx='1';
	for (char i='a';i<='o';i++){
		if ((i-1)%3==0) idx++;
		m[i]=idx;
	}
	m['p']=m['q']=m['r']=m['s']='7';
	m['t']=m['u']=m['v']='8';
	m['w']=m['x']=m['y']=m['z']='9';
	return m;
}
int check(string s){
	int left=0,right=s.size()-1;
	while(left<=right){
		if (s[left]!=s[right]) return 0;
		left++;right--;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	map<char,char>m=list();
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s,sample="";
		cin>>s;
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
			sample+=m[s[i]];
		}
		if (check(sample)) cout<<"YES\n"; else cout<<"NO\n";
	}
}
