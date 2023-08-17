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
	int k,n;
	cin>>k>>n;
	vector<pair<int,int>> v;
	pair<int,int> p;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		p=make_pair(a,b);
		v.pb(p);
	}
	int flag=0;
	for(int i=1;i<n;i++){
		if((v[i].first<=v[i-1].second)){
			cout<<v[i].first<<" "<<2<<endl;
			flag=0;
			break;
		}
		else if((v[i].first-v[i-1].second)==1){
			flag=1;
		}
		else{
			cout<<v[i-1].second+1<<" "<<0<<endl;
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<"OK"<<endl;
	}

	return 0;
}