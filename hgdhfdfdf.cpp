#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int flag=0;
	int count=0;
	while(flag==0){
		int remove=0;
		for(int i=1;i<v.size();i++){
			if(v[i]>v[i-1]){
				auto it=v.begin()+i;
				v.erase(it);
				remove++;
			}
		}
		if(remove==0){
			flag=1;
		}
		else{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}