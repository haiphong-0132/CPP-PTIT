#include <bits/stdc++.h>
using namespace std;

struct MucLuc{
	string tag;
	string page;
	int order;
};
bool cmp(pair<string,int> a, pair<string,int> b){
	return a.second<b.second;
}
int main(){
	ifstream fr{"VANBAN.txt"};
	ofstream fw{"MUCLUC.txt"};
	string curPage;
	
	vector<MucLuc> lv1;
	vector<MucLuc> lv2;
	vector<MucLuc> lv3;
	
	string s;
	fr>>ws;
	int appear=0;
	while(getline(fr,s)){
		if (s.substr(0,4)=="Page"){
			curPage=s.substr(5);
		}
		else if (s.substr(0,6)=="Level1"){
			MucLuc sub;
			sub.tag=s.substr(8);
			sub.page=curPage;
			sub.order=appear;
			lv1.push_back(sub);
			appear++;
		}
		else if (s.substr(0,6)=="Level2"){
			MucLuc sub;
			sub.tag=s.substr(8);
			sub.page=curPage;
			sub.order=appear;
			lv2.push_back(sub);
			appear++;
		}
		else if (s.substr(0,6)=="Level3"){
			MucLuc sub;
			sub.tag=s.substr(8);
			sub.page=curPage;
			sub.order=appear;
			lv3.push_back(sub);
			appear++;
		}
		
		fr>>ws;
	}
	vector<pair<string,int>> ans;
	for (auto i:lv1){
		string temp=">"+i.tag+"--- "+i.page+"\n";
		ans.push_back({temp,i.order});
	}
	
	for (auto i:lv2){
		string temp=">>"+i.tag+"--- "+i.page+"\n";
		ans.push_back({temp,i.order});
	}
	for (auto i:lv3){
		string temp=">>>"+i.tag+"--- "+i.page+"\n";
		ans.push_back({temp,i.order});
	}
	int num=ans.size();
	sort(ans.begin(),ans.end(),cmp);
	for (int i=0;i<num;i++){
		fw<<ans[i].first;
	}
	fr.close(); fw.close();
}
