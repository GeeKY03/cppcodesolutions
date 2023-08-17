#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> v;
	while(cin>>n){
		v.push_back(n);
	}
	int len = v.size();
	// reverse(v.begin(), v.end());
	// for(auto i: v){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	// random_shuffle(v.begin(), v.begin()+5);
	// for(auto i: v){
	// 	cout<<i<<" ";
	// }
	for(auto &itr: v){
		if((*itr)==2){
			cout<<i<<endl;
		}
	}
	return 0;
}