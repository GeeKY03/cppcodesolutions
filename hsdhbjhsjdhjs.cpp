#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={1,2,3,4};
	vector <int> rs;
	int n=v.size();
	for(int i=0;i<=n;i++){
		if(i==0){
			rs[i]=v[i];
		}
		else{
			rs[i]=v[i]+v[i-1];
		}
	}
	for( auto  x : rs){
		cout<<x<<" ";
	}
	return 0;
}