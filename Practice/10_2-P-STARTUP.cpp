#include <bits/stdc++.h>
using namespace std;
struct Point{
	int code;
	int share;
	int other;
	float sum;
};
bool cmp(Point a, Point b){
	if (a.sum==b.sum){
		return a.code<b.code;
	}
	return a.sum>b.sum;
}
bool cmp1(Point a, Point b){
	return a.code<b.code;
}
int main(){
	int n;
	cin>>n;
	Point ts[n];
	for (int i=0;i<n;i++){
		cin>>ts[i].code>>ts[i].share>>ts[i].other;
		ts[i].sum=ts[i].share*0.7+ts[i].other*0.3;
	}
	sort(ts,ts+n,cmp);
	sort(ts,ts+3,cmp1);
	for (int i=0;i<3;i++){
		cout<<ts[i].code<<" ";
	}
}
