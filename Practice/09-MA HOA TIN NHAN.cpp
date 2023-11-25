#include <iostream>
using namespace std;
<<<<<<< HEAD
string Encrypt(string ss){
	string s=ss;
=======
string Encrypt(string s){
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
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
	cout<<Encrypt(a);
}
<<<<<<< HEAD

=======
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
