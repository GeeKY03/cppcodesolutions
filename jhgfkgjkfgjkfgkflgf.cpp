#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	string s="";
	for(int i=31;i>=0;i--){
		if(x&(1<<i)){
			s.push_back('1');
		}
		else{
			s.push_back('0');
		}
	}
	cout<<s<<endl;
	return 0;
}