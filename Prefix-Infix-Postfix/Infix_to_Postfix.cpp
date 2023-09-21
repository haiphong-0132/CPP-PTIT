#include <bits/stdc++.h>
using namespace std;
int priority(char c){
	if (c=='^') return 3;
	else if (c=='*'||c=='/') return 2;
	else if (c=='+'||c=='-') return 1;
	return -1;
}
void infix_to_postfix(string s){
	stack<char> st;
	for (int i=0;i<s.size();i++){
		if (s[i]==' ') continue;
		else if ('0'<=s[i]&&s[i]<='9'||'A'<=s[i]&&s[i]<='Z'||'a'<=s[i]&&s[i]<='z') cout<<s[i];
		else if (s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while(st.top()!='('){
				cout<<st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while (!st.empty()&&priority(s[i])<=priority(st.top())){
				cout<<st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		infix_to_postfix(s);
		cout<<endl;
	}
}

