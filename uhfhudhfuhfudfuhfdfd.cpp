#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int array[n];
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		int index=0;
		if(n==1){
			cout<<array[0]<<endl;
		}
		else {
			for(int i=0;i<n;i++){
				if(array[i]>i+1){
					index=i;
					break;
				}
			}
			vector<int> v;
			for(int i=index;i<n;i++){
				v.push_back(array[i]);
			}
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
			int min=
		}
	}
	return 0;
}