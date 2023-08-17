#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	long int count=0;
	for(int i=0;i<n;i++){
		int num=s1[i]-s2[i];
		if(num<0){
			num=num*(-1);
		}
		if(num>5){
			num=num-10;
			num=num*(-1);
		}
		count=count+num;
	}
	cout<<count<<endl;
	return 0;
}