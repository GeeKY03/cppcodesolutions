#include<iostream>
using namespace std;
int main(){
	string s1,s2,s;
	cin>>s1>>s2;
	int len = s1.size();
	for(int i=0;i<len;i++){
		s.push_back(s1[i]);
		s.push_back(s2[i]);
	}
	cout<<s<<endl;
	return 0;
}