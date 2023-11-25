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
<<<<<<< HEAD
		char ctemp(ans[t-1]);
		int temp=t-1;
		while(!isalnum(ans[temp--])){
			ans.pop_back();
		}
		ans+=ctemp;
	}
	t=ans.size();
	if (ans[t-1]!='.'&&ans[t-1]!='!'&&ans[t-1]!='?'){
		ans+=".";
	}
	ans[0]=toupper(ans[0]);
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	while(getline(cin,s)){
		cout<<chuanhoa(s);
		cout<<"\n";
	}
}

=======
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
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
