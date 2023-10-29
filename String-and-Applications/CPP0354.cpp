#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char>st;
		st.push(s[0]);
		for (int i=1;i<s.size();i++){
			if (s[i]==st.top()) st.push(s[i]);
			else{
				int count=0;
				cout<<st.top();
				while(!st.empty()){
					count++;
					st.pop();
				}
				cout<<count;
				st.push(s[i]);
			}
		}
		if (!st.empty()){
			cout<<st.top();
			int count=0;
			while(!st.empty()){
				count++;
				st.pop();
			}
			cout<<count;
		}
		cout<<"\n";
	}
}
