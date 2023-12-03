#include <bits/stdc++.h>
using namespace std;

struct DanhBa{
	string name;
	string number;
	string date;
};

vector<string>split_name(string name){
	vector<string>v;
	stringstream ss(name);
	string word;
	ss>>word;
	while(ss>>word){
		v.push_back(word);	
	}
	v.pop_back();
	
	auto pos=name.rfind(' ');
	v.push_back(name.substr(pos+1));
	return v;
}

bool cmp(DanhBa a, DanhBa b){
	vector<string> va=split_name(a.name);
	vector<string> vb=split_name(b.name);
	if (va[1]==vb[1]){
		return va[0]<vb[0];
	}
	return va[1]<vb[1];
}

int main(){
	DanhBa db[1000];
	ifstream fr{"SOTAY.txt"};
	ofstream fw{"DIENTHOAI.txt"};
	string s;
	fr>>ws;
	string d1="";
	int i=0;
	while(getline(fr,s)){
		if(s.substr(0,4)=="Ngay"){
			d1=s.substr(5);
			fr>>ws;
			db[i].date=d1;
			getline(fr,db[i].name);
			fr>>ws;
			getline(fr,db[i].number);
			fr>>ws;	
		}
		else{
			db[i].date=d1;
			db[i].name=s;
			fr>>ws;
			getline(fr,db[i].number);
			fr>>ws;
		}
		i++;
	}
	sort(db,db+i,cmp);
	for (int j=0;j<i;j++){
		fw<<db[j].name<<": "<<db[j].number<<" "<<db[j].date<<"\n";
	}
	fr.close(); fw.close();
}
