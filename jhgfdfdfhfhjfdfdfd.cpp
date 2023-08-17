#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi v;
		int allc=1;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.pb(num);
		}
		for(int i=0;i<n;i++){
			if(v[i]==v[i-1]){
				allc++;
			}
		}
		vi v2;
		int count=0;
		if (allc==n){
			count=0;
		}
		else{
		for(int i=1;i<n;i+=2){
			if((v[i]==0)&&(v[i-1]==0)){
				continue;
			}
			else{
				count++;
				v2.pb((v[i]&v[i-1]));
			}
		}
		vi v3;
		for(int i=1;i<v2.size();i+=2){
			if((v[i]==0)&&(v[i-1]==0)){
				continue;
			}
			else{
				count++;
				v3.pb((v[i]&v[i-1]));
			}
		}
		for(int i=1;i<v3.size();i+=2){
			if((v[i]==0)&&(v[i-1]==0)){
				continue;
			}
			else{
				count++;
			}
		}
	    }
		cout<<count<<endl;
		




		// int flag=0;
		// for(int i=0;i<n;i+=2){
		// 	int num=(v[i]&v[i+1]);
		// 	if(num==0){
		// 		flag==1;
		// 	}
		// }
		// int count=0;
		// for(int i=0;i<v2.size();i++){
		// 	if(v2[i]!=0){
		// 		count++;
		// 	}
		// }
		// cout<<count<<endl;
	}


	return 0;
}