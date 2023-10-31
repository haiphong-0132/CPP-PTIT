#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	for (int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	string ans="";
	stringstream ss(s);
	string word;
	while(ss>>word){
		ans+=word+" ";
	}
	ans.pop_back();
	int t=ans.size();
	if ((ans[t-1]=='.'||ans[t-1]=='?'||ans[t-1]=='!')&&ans[t-2]==' '){
		ans[t-2]=ans[t-1];
		ans[t-1]='\0';
	}
	else if (ans[t-1]!='.'&&ans[t-1]!='!'&&ans[t-1]!='?'){
		ans+=".";
	}
	ans[0]=toupper(ans[0]);
	ans+="\n";
	return ans;
}
int main(){
	string s;
	while(getline(cin,s)){
		cout<<chuanhoa(s);
	}
}
