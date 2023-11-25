#include <iostream>
using namespace std;
<<<<<<< HEAD
string Decrypt(string s){
=======
string Encrypt(string s){
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
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
<<<<<<< HEAD
	cout<<Decrypt(a);
=======
	cout<<Encrypt(a);
>>>>>>> 8b9a7c6fa5f26a0510549b4666bbb88f580ed0ee
}

