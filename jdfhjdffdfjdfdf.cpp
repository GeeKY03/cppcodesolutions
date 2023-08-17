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
		vi v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.pb(a);
		}
		int flag=1;
		for(int i=1;i<n;i++){
			if((v[i]<v[i-1])){
				swap(v[i],v[i-1]);
				break;
		}
		for(int i=1;i<n;i++){
			if(v[i-1]>v[i+1]){
				flag=0;
				break;
			}
		}
		if(flag==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	    }
    }

	return 0;
}