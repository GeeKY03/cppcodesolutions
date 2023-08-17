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
	cin>>s1>>s2;
	int len=s2.size();
	int ind=0;
	int count=0;
	int flag=0;//True
	for(int i=0;i<len;i++){
		if(i==0){
			if(s2[i]==s1[count]){
				count++;
			}
			else{
				flag=1;
				break; //False
			}
		}
		else{
			if((s2[i]==s1[count])){
				count++;
			}
			else if((s2[i]!=s1[count])&&(s2[i]==s2[i-1])){
				continue;
			}
			else if((s2[i]!=s1[count])&&(s2[i]!=s2[i-1])){
				flag=1;
				break;
			}
		}
	}
	if(flag==1){
		cout<<"False"<<endl;
	}
	else if(s1.size()>s2.size()){
		cout<<"False"<<endl;
	}
	else{
		cout<<"True"<<endl;
	}


	return 0;
}