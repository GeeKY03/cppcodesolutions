#include<iostream>
#include<string>
using namespace std;
int main(){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	if((d1>=d2)||(m1>=m2)||(y1>=y2)){
	if(y1==y2){
		if(m1==m2){
			if(d1==d2){
				cout<<0<<endl;
			}
			else{
				cout<<(d1-d2)*15<<endl;
			}
		}
		else{
			cout<<(m1-m2)*500<<endl;
		}
	}
	else if(y1>y2){
		cout<<10000<<endl;
	}
    }
    else{
    	cout<<0<<endl;
    }
	return 0;
}