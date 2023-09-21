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
string postfix_to_infix(string s){
	stack<string> st;
	for (int i=0;i<s.size();i++){
		if (!Operator(s[i])) st.push(string(1,s[i]));
		else{
			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();
			string temp="("+op2+s[i]+op1+")";
			st.push(temp);
		}
	}
	return st.top();
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<postfix_to_infix(s)<<endl;
	}
}
