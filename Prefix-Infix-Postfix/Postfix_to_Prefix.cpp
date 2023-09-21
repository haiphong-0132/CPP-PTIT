#include <bits/stdc++.h>
using namespace std;
bool Operator(char c){
	switch(c){
		case '+':
		case '-':
		case '*':
		case '/':
			return true;
	}
	return false;
}
string postfix_to_prefix(string s){
	stack<string> st;
	for (int i=0;i<s.size();i++){
		if (Operator(s[i])){
			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();
			string temp=s[i]+op2+op1;
			st.push(temp);
		}
		else{
			st.push(string(1,s[i]));
		}
	}
//	string ans=st.top();
//	string ans="";
//	while(!st.empty()){
//		ans+=st.top();
//		st.pop();
//	}
	stack<string>temp;
	while(!st.empty()){
		temp.push(st.top());
		st.pop();
	}
	string ans="";
	while(!temp.empty()){
		ans+=temp.top();
		temp.pop();
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		string ans=postfix_to_prefix(s);
		cout<<ans<<endl;
	}
}
