#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0;
		int len= s.size();
		for(int i=0;i<(len/2)+1;i++){
		    for(int i=0; i<s.size()-1; i++){
			    if(s[i]==s[i+1]){
				    s[i]='0';
				    count++;
			    }
			    string s1=s;
			    s="";
			    for(int i=0;i<s1.size();i++){
				    if(s1[i]=='0'){
					    continue;
				    }
				    else{
					    s+=s1[i];
				    }
			    }
		    }
		}
		cout<<count<<endl;
	}
	return 0;
}