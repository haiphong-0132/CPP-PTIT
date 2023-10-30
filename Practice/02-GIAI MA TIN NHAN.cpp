#include <iostream>
using namespace std;
string Ecrypt(string s){
	for (int i=0;i<s.size();i++){
		if ('A'<=s[i]&&s[i]<='X'){
			s[i]=s[i]+2;
		}
		else if ('c'<=s[i]&&s[i]<='z'){
			s[i]=s[i]-2;
		}
		else if(s[i]=='Y'){
			s[i]='A';
		}
		else if (s[i]=='Z'){
			s[i]='B';
		}
		else if (s[i]=='a'){
			s[i]='y';
		}
		else if (s[i]=='b'){
			s[i]='z';
		}
	}
	return s;
}
int main(){
	string a;
	getline(cin,a);
	cout<<Ecrypt(a);
}
