#include <bits/stdc++.h>
using namespace std;

class NhanVien{
	public:
		string name;
		long long int salary;
		long long int day;
		string role;
};

long long int check_role(string role){
	if (role=="GD") return 250000;
	else if (role=="PGD") return 200000;
	else if (role=="TP") return 180000;
	else if (role=="NV") return 150000;
}

long long int check_bonus(long long int day, long long int a){
	if (day>=25) return a/10*2;
	else if (day>=22) return a/10;
	return 0;
}

int main(){
	NhanVien nv;
	getline(cin,nv.name);
	cin>>nv.salary;
	cin.ignore();
	cin>>nv.day;
	cin.ignore();
	cin>>nv.role;
	long long int bonus=check_bonus(nv.day,nv.salary*nv.day);
	long long int phucap=check_role(nv.role);
	long long int sum=nv.salary*nv.day+phucap+bonus;
	cout<<"NV01"<<" "<<nv.name<<" "<<nv.salary*nv.day<<" ";
	printf("%lld",bonus);
	cout<<" "<<phucap<<" "<<sum;
}
