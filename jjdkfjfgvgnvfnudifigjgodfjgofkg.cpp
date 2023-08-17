#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	vector<int> v1;
	for(int i=0;i<n-1;i++){
		int count=0;
		for(int j=i+1;j<n;j++){
			int num1=array[i];
			int num2=array[j];
			string s1=to_string(num1);
			string s2=to_string(num2);
			for(int l=0;l<m;l++){
				if((s1[l]!='0')&&(s2[l]!='0')){
					count++;
				}
			}
		}
		v1.push_back(count);
	}
	sort(v1.begin(),v1.end());
	int x=v1.size();
	int ref=v1[(x-1)];
	int count2=1;
	for(int i=x-1;i>=0;i--){
		if(v1[i]==ref){
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