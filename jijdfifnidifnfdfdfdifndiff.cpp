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
		if(n==1){
			cout<<v[0]<<endl;
		}
		else if(n==2){
			if(v[0]>v[1]){
				cout<<v[1]<<" "<<v[0]<<endl;
			}
			else{
				cout<<v[0]<<" "<<v[1]<<endl;
			}
		}
		else{
			int i1=0,i2=0;
			if(v[0]>1){
				i1=0;
				for(int i=0;i<n;i++){
					if(v[i]==1){
						i2=i;
						break;
					}
				}
				reverse(v.begin()+i1,v.begin()+i2+1);
				for(int i=0;i<n;i++){
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
			else{
				for(int i=0;i<n;i++){
					if(v[i]>(i+1)){
						i1=i;
						break;
					}
				}
				int min=v[i1];
				for(int i=i1;i<n;i++){
					if(v[i]<min){
						min=v[i];
						i2=i;
					}
				}
				// cout<<"min="<<min<<endl;
				// cout<<"minindex="<<i2<<endl;
				reverse(v.begin()+i1,v.begin()+i2+1);
				for(int i=0;i<n;i++){
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
		}
		// for(int i=0;i<v.size();i++){
		// 	cout<<v[i]<< " ";
		// }
	}
	return 0;
}