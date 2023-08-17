#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int count=0;
	vector<int> v;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int num= array[i]+array[j];
			string s= to_string(num);
			for(int k=0;k<s.size();k++){
				if(s[k]>=49){
					count++;
				}
			}
			v.push_back(count);
			count=0;
		}
	}
	sort(v.begin(),v.end());
	int x= v.size();
	int ref=v[x-1];
	int count2=0;
	for(int i=x-1;i>=0;i--){
		if(v[i]==ref){
			count2++;
		}
		else{
			break;
		}
	}
	cout<<ref<<endl;
	cout<<count2<<endl;
	return 0;
}