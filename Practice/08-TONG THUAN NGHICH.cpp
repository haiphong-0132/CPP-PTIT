#include <bits/stdc++.h>
using namespace std;
string sum(int n){
	if (n==1) return "45";
	string temp="495";
	if (n==2) return temp;
//Truong hop n le: A=So luong so thuan nghich=9*10*....*10 (n/2 thua so 10)
//Tinh so cap:  A/2 -> bot di mot thua so 10 -> Con n/2-1 thua so 10
//Tinh tong:A/2*(So thuan nghich cuoi+So thuan nghich dau) (Tong nay cap cho ket qua n-1 so 0)
//Ket qua="4950....0" (co n/2-1 + n-1 so 0)
	if (n%2!=0){
		for (int i=0;i<(int)n/2-1+n-1;i++){
			temp+="0";
		}
	}
//Truong hop n chan: A=So luong so thuan nghich=9*10*....*10 (n/2-1 thua so 10)
//Tinh so cap:  A/2 -> bot di mot thua so 10 -> Con n/2-1-1 thua so 10
//Tinh tong:A/2*(So thuan nghich cuoi+So thuan nghich dau) (Tong nay cap cho ket qua n-1 so 0)
//Ket qua="4950....0" (co n/2-1-1 + n-1 so 0)

	else{
		for (int i=0;i<(int)n/2-2+n-1;i++){
			temp+="0";
		}
	}
	return temp;
}
int main(){
	int n;
	cin>>n;
	cout<<sum(n);	
}
