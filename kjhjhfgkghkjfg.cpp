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
	int n,k;
	cin>>n>>k;
	vi v;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		v.pb(num);
	}
	sort(v.begin(),v.end());
	int count=1;
	vector<pair<int,int>> vc;
	for(int i=1;i<n;i++){
		if(v[i]==v[i-1]){
			count++;
			if(i==n-1){
				pair<int,int> p={count,v[i]};
				vc.pb(p);
			}
		}
		else{
			pair<int,int> p={count,v[i-1]};
			vc.pb(p);
			count=1;
			if(i==n-1){
				pair<int,int> p={count,v[i]};
				vc.pb(p);
			}
		}
	}
	sort(vc.rbegin(),vc.rend());
	// for(int i=0;i<vc.size();i++){
	// 	cout<<vc[i].first<<" "<<vc[i].second<<endl;
	// }
	if(vc[0].first>=k){
		cout<<0<<endl;
	}
	else{
		// cout<<"HEHE"<<endl;
		vi move;
		for(int i=0;i<vc.size();i++){
			if((vc[i].second==1)||(vc[i].second)%2==0){
			    int count=0;
			    int moves=k-vc[i].first;
			    for(int j=0;j<n;j++){
				    if(v[j]<=vc[i].second){
					    continue;
				    }
				    else if(v[j]<=(2*vc[i].second)){
					    continue;
				    }
				    else{
				    	
				    }
			    }
			}
			else{
				continue;
			}
		}
	}
	return 0;
}