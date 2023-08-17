#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s1,s2;
	int k,len1;
	int sf=0;
	int cc=0;
	cin>>s1;
	cin>>k;
	len1=s1.length();
	for(int i=0;i<len1;i++){
		if((s1[i]=='*')||(s1[i]=='?')){
			if(s1[i]=='?'){
				cc++;
			}
			else{
				sf++;
			}
		}
		else{
			s2.pb(s1[i]);
		}
	}
	int len2= s2.length();
	if(len2==k){
		cout<<s2<<endl;
	}
	else if(len2>k){
		int count=len2-k;
		if(count>(sf+cc)){
			cout<<"Impossible"<<endl;
		}
		else{
			for(int i=0;i<len1;i++){
				if(((s1[i+1]=='?')||(s1[i+1]=='*'))&&(count>0)){
					i++;
					count--;
				}
				else{
					if((s1[i]=='?')||(s1[i]=='*')){
						continue;
					}
					else{
						cout<<s1[i];
					}
				}
			}
		}
	}
	else if(len2<k){
		int count=k-len2;
		int flag=1;
		if(sf==0){
			cout<<"Impossible"<<endl;
		}
		else{
			for(int i=0;i<len1;i++){
				if((s1[i+1]=='*')&&(flag==1)){
					cout<<s1[i];
					for(int j=0;j<count;j++){
						cout<<s1[i];
					}
					flag=0;
				}
				else{
					if((s1[i]=='?')||(s1[i]=='*')){
						continue;
					}
					else{
						cout<<s1[i];
					}
				}
			}
		}
	}

	return 0;
}