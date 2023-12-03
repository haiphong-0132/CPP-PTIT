#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s){
	if (s[2]!='/') s="0"+s;
	if (s[5]!='/') s.insert(3,"0");
	return s;
}

string chuanhoaten(string s){
	stringstream ss(s);
	string word;
	string ans="";
	while(ss>>word){
		for (int i=0;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
		word[0]=toupper(word[0]);
		ans+=word+" ";
	}
	ans.pop_back();
	return ans;
}

class SinhVien{
	public:
		string id;
		string name;
		string Class;
		string date;
		float gpa;
		
		friend istream &operator>>(istream &in, SinhVien &sv){
			sv.id="B20DCCN001";
			getline(in,sv.name);
			getline(in,sv.Class);
			getline(in,sv.date);
			in>>sv.gpa;
			
			return in;
		}
		
		friend ostream &operator<<(ostream &out, SinhVien &sv){
			out<<sv.id<<" "<<chuanhoaten(sv.name)<<" "<<sv.Class<<" "<<chuanhoa(sv.date)<<" "<<fixed<<setprecision(2)<<sv.gpa;
			
			return out;
		}
};

int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
