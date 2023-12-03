#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int buoihoc;
		cin>>buoihoc;
		int ok=1;
		map<char,map<int,map<char,int>>>week_link_day;
		//tuan - thu; thu-tiet; tiet-dung
		for (int i=0;i<buoihoc;i++){
			int thu;
			cin>>thu;
			cin>>ws;
			string tiet,tuan;
			getline(cin,tiet);
			getline(cin,tuan);
			char prev_tuan='0';
			char max_tuan='0';
			for (int i=0;i<tuan.size();i++){
				if (tuan[i]=='-') continue;
//				map<int,map<char,int>> thu_tiet;
//				map<char,int> tiet_dung;
//				
//				thu_tiet[thu]=tiet_dung;
//				week_link_day[tuan[i]]=thu_tiet;

				
				for (int j=0;j<tiet.size();j++){
					if (tiet[j]=='-') continue;
					if (prev_tuan>tuan[i]){
						max_tuan=prev_tuan;
						for (int k=i;k<tuan.size()&&tuan[k]<=max_tuan;k++){
							if (tuan[k]=='-') continue;
							for (int p=0;p<tiet.size();p++){
								if (tiet[p]=='-') continue;
								week_link_day[tuan[k]][thu][tiet[p]]=0;

							}
								
						}
					}
					prev_tuan=tuan[i];
//					cout<<week_link_day[tuan[i]][thu][tiet[j]];
					if (week_link_day[tuan[i]][thu][tiet[j]]==0){
						week_link_day[tuan[i]][thu][tiet[j]]=1;
					}
					else{
//						cout<<tuan[i]<<" "<<thu<<" "<<tiet[j]<<"\n";
						ok=0;
						break;
					}
				}
			}

			
		}
		if (!ok){
			cout<<"YES\n";
		}
		else cout<<"NO\n";

		
	}
}


