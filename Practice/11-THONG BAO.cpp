#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		int curr=0;
		while(ss>>word){
			curr+=word.size()+1;
			if (curr<=100){
				cout<<word<<" ";
			}
			else break;
		}
		cout<<"\n";
	}
}
