#include <iostream>
using namespace std;
string decrypt(string p){
	string temp="";
	for (auto c:p){
		if ('A'<=c&&c<='J'){
			temp+=(char)c-17;
		}
		else if ('K'<=c&&c<='T'){
			temp+=(char)c-27;
		}
	}
	return temp;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s,p;
		cin>>s>>p;
		if (s==decrypt(p)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
