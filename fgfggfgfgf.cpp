#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={10,20,30,40};
	v.insert(v.begin(),3);
	v.insert(v.begin(),2,4);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.erase(v.begin()+(v.size()-1));
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.resize(5);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}