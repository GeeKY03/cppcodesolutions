#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.push_back(num);
		}
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v.size()-1;j++){
				if(v[j]>(2*v[j+1])){
					if(v[j]%2==0){
						v.insert(v.begin()+j+1,v[j]/2);
						break;
					}
					else{
						v.insert(v.begin()+j+1,(v[j]+1)/2);
						break;
					}
				}
				else if(v[j+1]>(2*v[j])){
					if(v[j+1]%2==0){
						v.insert(v.begin()+j+1,v[j+1]/2);
						break;
					}
					else{
						v.insert(v.begin()+j+1,(v[j+1]+1)/2);
						break;
					}
				}
			}
		}
		cout<<v.size()-n<<endl;
	}
	return 0;
}