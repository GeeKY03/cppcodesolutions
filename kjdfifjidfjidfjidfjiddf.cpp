#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<string> v;
	int count=0;
	int num=0;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(count==0){
		    for(int i=0;i<5;i++){
			    if((s[i]=='O')&&(s[i+1]=='O')){
				    s[i]='+';
				    s[i+1]='+';
				    count++;
				    break;
			    }
		    }
		}
		v.push_back(s);

	}
	if(count==0){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			cout<<v[i]<<endl;
		}
	}
	return 0;
}