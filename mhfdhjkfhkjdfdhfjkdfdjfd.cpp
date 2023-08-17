#include<bits/stdc++.h>
using namespace std;


int difference(string s1,string s2){
	int sum;
	for (int i=0;i<s1.length();i++){
		sum+=abs(int(s2[i])-int(s1[i]));	
	}
	return sum;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string arr[n];
		for (int i=0;i<n;i++){
			cin >> arr[i];
		}
		vector <int> sums;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				sums.push_back(difference(arr[i],arr[j]));
			}
		}
		sort(sums.begin(),sums.end());
		int ctr=0;
		for (int i=0;i<n*n;i++){
			if (sums[i]>0){
				cout<<sums[i]<<endl;
				ctr=1;
				break;
			}
		}
		if(ctr==0){
			cout<<0<<endl;
		}
	}
}