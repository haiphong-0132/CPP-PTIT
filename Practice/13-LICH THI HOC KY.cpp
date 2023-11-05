#include <bits/stdc++.h>
using namespace std;
class MonHoc{
	private:
		string subject_id;
		string subject;
	public:
		friend istream &operator>>(istream &is, MonHoc&mh){
			getline(is,mh.subject_id);
			getline(is,mh.subject);
			return is;
		}
		string getID(){
			return this->subject_id;
		}
		string getSubject(){
			return this->subject;
		}
		void setSubject(string subject){
			this->subject=subject;
		}
};
class LichThi{
	private:
		string code;
		string subject_id;
		string subject;
		string date;
		string time;
		string group;
	public:
		friend istream &operator>>(istream &is, LichThi& lt){
			is>>lt.subject_id>>lt.date>>lt.time>>lt.group;
			return is;
		}
		friend ostream &operator<<(ostream &out, LichThi& lt){
			out<<lt.code<<" "<<lt.subject_id<<" "<<lt.getSubject()<<" "<<lt.date<<" "<<lt.time<<" "<<lt.group<<"\n";
			return out;
		}
		void setcode(string code){
			this->code=code;
		}
		string getDate(){
			vector<string>v;
			string ans="";
			stringstream ss(this->date);
			string word;
			while(getline(ss,word,'/')){
					v.push_back(word);
			}
			for(int i=v.size()-1;i>=0;i--){
				ans+=v[i]+"/";
			}
			ans.pop_back();
			return ans;
		}
		string getTime(){
			return this->time;
		}
		string getID(){
			return this->subject_id;
		}
		string getSubject(){
			return this->subject;
		}
		void setSubject(string subject){
			this->subject=subject;
		}
};
bool cmp(LichThi a, LichThi b){
	string adate=a.getDate();
	string bdate=b.getDate();
	if (adate==bdate){
		if (a.getTime()==b.getTime()){
			return a.getID()<b.getID();
		}
		return a.getTime()<b.getTime();
	}
	return adate<bdate;
}
void process(MonHoc mh[], int n, LichThi lt[], int m){
	map<string,string>mp;
	for (int i=0;i<n;i++){
		mp[mh[i].getID()]=mh[i].getSubject();
	}
	for (int i=0;i<m;i++){
		string code=to_string(i+1);
		while(code.size()<3){
			code="0"+code;
		}
		code="T"+code;
		lt[i].setcode(code);
		lt[i].setSubject(mp[lt[i].getID()]);
	}
	sort(lt,lt+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}

