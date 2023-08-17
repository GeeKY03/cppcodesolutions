#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={545,44,54,54,885,45,252,45,45,45,415,4,1,5,4,152,4,4,212,0,21,4,5,45};
	sort(v.begin(),v.end());
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	auto it=upper_bound(v.begin(),v.end(),21);
	cout<<*it<<endl;
	// we can print the index of the value
	int index=it-v.begin();
	cout<<"index is "<<index<<endl;

	return 0;
}