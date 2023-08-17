#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		for(int i=0;i<n;i++){
			string s1;
			cin>>s1;
			s+=s1;
		}
		int len =s.length();
		string array[len];
		for(int i=0;i<len;i++){
			array[i]=s[i];
		}
		sort(array, array+len);
		vector<int> v;
		int count=1;
		for(int i=1;i<len;i++){
			if(i==len-1){
				if(array[i]==array[i-1]){
					count++;
					v.push_back(count);
				}
				else{
					v.push_back(1);
				}
			}
			if(array[i]==array[i-1]){
				count++;
			}
			else{
				v.push_back(count);
				count=1;
			}
		}
		int counter=0;
		for(int i=0;i<v.size();i++){
			if(v[i]%n==0){
				counter++;
			}
		}
		if(counter==v.size()){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}