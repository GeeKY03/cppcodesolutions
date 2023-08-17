#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		int len = s.length();
		int a= (s[0]-49)*10;
		for(int i=len;i>0;i--){
			a=a+i;
		}
		cout<<a<<endl;
	}
	return 0;
}