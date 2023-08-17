#include<iostream>
using namespace std;
int main(){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	if(y2>y1){
		cout<<0<<endl;
	}
	else if((y2==y1)&&(m2>m1)){
		cout<<0<<endl;
	}
	else if((y2==y1)&&(m1<=m2)&&(d1<=d2)){
		cout<<0<<endl;
	}
	else if(y1>y2){
		cout<<10000<<endl;
	}
	else if((y1==y2)&&(m1>m2)){
		cout<<(m1-m2)*500<<endl;
	}
	else if((y1==y2)&&(m1==m2)&&(d1>d2)){
		cout<<(d1-d2)*15<<endl;
	}
	return 0;
}