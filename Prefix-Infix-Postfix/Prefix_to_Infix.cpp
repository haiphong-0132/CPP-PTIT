#include <bits/stdc++.h>
using namespace std;
bool IsOperator(char c){
	switch(c){
		case '+':
		case '-':
		case '*':
		case '/':
			return true;
	}
	return false;
}
string prefix_to_infix(string s){
	stack<string>st;
	for (int i=s.size()-1;i>=0;i--){
		if (!IsOperator(s[i])) st.push(string(1,s[i]));
		else{
			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();
			st.push("("+op1+s[i]+op2+")");
		}
	}
	return st.top();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<prefix_to_infix(s)<<endl;
	}
}

