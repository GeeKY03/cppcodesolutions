#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int, string> m;
	int a;
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>s;
		m.insert({a,s});
	}
	m.clear();
	for(auto &i : m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	// auto it=m.find(4);
	// cout<<(*it).first<<" "<<(*it).second<<endl;
	return 0;
}