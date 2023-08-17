#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		int flag=0;
		vector<string> v;
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			if(c=='W'){
				if(s==""){
					continue;
				}
				else{
					v.pb(s);
					s="";
				}
			}
			else{
				s.pb(c);
				if(i==n-1){
					v.pb(s);
				}
			}
		}
		int x=v.size();
		if(x==0){
			flag=0;
		}
		else{
			for(int i=0;i<x;i++){
				int y=v[i].size();
				if(y==1){
					flag=1;
					break;
				}
				else if(y==2){
					int r=count(v[i].begin(),v[i].end(),'R');
				    int b=count(v[i].begin(),v[i].end(),'B');
				    if((r==0)||(b==0)){
				    	flag=1;
				    	break;
				    }
				}
				else{
					int r=count(v[i].begin(),v[i].end(),'R');
				    int b=count(v[i].begin(),v[i].end(),'B');
				    if((r==0)||(b==0)){
				    	flag=1;
				    	break;
				    }
				}
			}
		}
		// if(x==0){
		// 	flag=0;
		// }
		if(n==1){
			if(v.size()==0){
				flag=0;
			}
			else{
				flag=1;
			}
		}
		if(flag==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}