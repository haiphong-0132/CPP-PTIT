#include <bits/stdc++.h>
using namespace std;
int calculate(int op1, int op2, char Operator){
	int val;
	switch(Operator){
		case '+': val=op1+op2; break;
		case '-': val=op1-op2; break;
		case '*': val=op1*op2; break;
		case '/': val=op1/op2; break;
	}
	return val;
}
int value(string s){
	stack<int> st;
	for (int i=s.size()-1;i>=0;i--){
		if ('0'<=s[i]&&s[i]<='9') st.push(s[i]-'0');
		else{
			int op1=st.top();
			st.pop();
			int op2=st.top();
			st.pop();
			st.push(calculate(op1,op2,s[i]));
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
		cout<<value(s)<<endl;
	}
}

