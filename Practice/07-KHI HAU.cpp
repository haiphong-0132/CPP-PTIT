#include <iostream>
using namespace std;
bool leapYear(int y){
	if (y==0) return 0;
	if (y%4==0&&y%100!=0 || y%400==0){
		return 1;
	}
	return 0;
}
string north(int y, int d){
	if (leapYear(y)){
		if (d>=32 && d<=121) return "Xuan";
		else if (d>=122 && d<=213) return "He";
		else if (d>=214 && d<=305) return "Thu";
		else if (d>=306 && d<=366 || d>=1 && d<=31) return "Dong";
	}
	else{
		if (d>=32 && d<=120) return "Xuan";
		else if (d>=121 && d<=212) return "He";
		else if (d>=213 && d<=304) return "Thu";
		else if (d>=305 && d<=365 || d>=1 && d<=31) return "Dong";
	}
}
string south(int y, int d){
	if (leapYear(y)){
		if (d>=122 && d<=305) return "Mua";
		return "Kho";
	}
	else{
		if (d>=121 && d<=304) return "Mua";
		return "Kho";
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		int y,d;
		cin>>a;
		cin>>y>>d;
		if (a=="Bac"){
			cout<<north(y,d)<<"\n";	
		}
		else cout<<south(y,d)<<"\n";
		
	}
}
