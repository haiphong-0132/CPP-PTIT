#include <iostream>
using namespace std;
string Decrypt(string s){
	for (int i=0;i<s.size();i++){
		if ('C'<=s[i]&&s[i]<='Z'){
			s[i]=s[i]-2;
		}
		else if ('a'<=s[i]&&s[i]<='x'){
			s[i]=s[i]+2;
		}
		else if(s[i]=='A'){
			s[i]='Y';
		}
		else if (s[i]=='B'){
			s[i]='Z';
		}
		else if (s[i]=='y'){
			s[i]='a';
		}
		else if (s[i]=='z'){
			s[i]='b';
		}
	}
	return s;
}
int main(){
	string a;
	getline(cin,a);
	cout<<Decrypt(a);
}

