#include <bits/stdc++.h>
using namespace std;
int priority(char s){
	if (s=='^') return 3;
	else if (s=='*'||s=='/') return 2;
	else if (s=='+'||s=='-') return 1;
	return -1;
}
vector<char> infix_to_postfix(string s, int len){
	vector<char> ans;
	stack<char> st;
	for (int i=0;i<len;i++){
		if ('0'<=s[i]&&s[i]<='9'||'A'<=s[i]&&s[i]<='Z'||'a'<=s[i]&&s[i]<='z'){
			ans.push_back(s[i]);
		}
		else if (s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while (st.top()!='('){
				ans.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else{
			while (!st.empty() && priority(s[i])<=priority(st.top())){
				ans.push_back(st.top());
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		ans.push_back(st.top());
		st.pop();	
	}
	return ans;
}
vector<char> infix_to_prefix(string s, int len){
	reverse(s.begin(), s.end());
	for (int i=0;i<len;i++){
		if (s[i]=='(') s[i]=')';
		else if (s[i]==')') s[i]='(';
	}
	vector<char> ans = infix_to_postfix(s,len);
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
	string s;
	cin>>s;
	int len=s.size();
	vector<char> st = infix_to_prefix(s,len);
	for (int i=0;i<st.size();i++) cout<<st[i];
}
