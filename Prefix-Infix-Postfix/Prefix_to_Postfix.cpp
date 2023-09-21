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
string prefix_to_postfix(string s){
	stack<string> st;
	for (int i=s.size()-1;i>=0;i--){
		if (Operator(s[i])){
			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();
			string temp=op1+op2+s[i];
			st.push(temp);
		}
		else st.push(string(1,s[i]));
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
		string ans=prefix_to_postfix(s);
		cout<<ans<<endl;
	}
}

