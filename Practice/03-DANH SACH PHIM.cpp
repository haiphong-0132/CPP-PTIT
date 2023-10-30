#include <bits/stdc++.h>
using namespace std;
struct Film{
	string filmCode;
	string typeCode;
	int d,m,y;
	string name;
	string episode;
};
bool cmp(Film a, Film b){
	if (a.y==b.y){
		if (a.m==b.m){
			if (a.d==b.d){
				if (a.name==b.name){
					return a.episode>b.episode;
				}
				return a.name<b.name;
			}
			return a.d<b.d;
		}
		return a.m<b.m;
	}
	return a.y<b.y;
}
int main(){
	map<string,string>mp;
	int n,m;
	cin>>n>>m;
	cin.ignore();
	for (int i=0;i<n;i++){
		string s,temp=to_string(i+1);
		getline(cin,s);
		while(temp.size()<3){
			temp="0"+temp;
		}
		temp="TL"+temp;
		mp[temp]=s;
	}
	Film f[m];
	for (int i=0;i<m;i++){
		string temp=to_string(i+1);
		while(temp.size()<3){
			temp="0"+temp;
		}
		temp="P"+temp;
		f[i].filmCode=temp;
		cin>>f[i].typeCode;
		scanf("%d/%d/%d",&f[i].d,&f[i].m,&f[i].y);
		cin.ignore();
		getline(cin,f[i].name);
		cin>>f[i].episode;
		cin.ignore();
	}
	sort(f,f+m,cmp);
	for (auto i:f){
		cout<<i.filmCode<<" "<<mp[i.typeCode]<<" "<<i.d<<"/"<<i.m<<"/"<<i.y<<" "<<i.name<<" "<<i.episode<<"\n";
	}
}
