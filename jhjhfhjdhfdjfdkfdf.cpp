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
		vlli v;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
		}
		vector<pair<int,char>> v1;
		for(int i=1;i<n-1;i++){
			if((v[i]>v[i-1])&&(v[i]>v[i+1])){
				pair<int,char> p={i,'h'};
				v1.pb(p);
			}
			else if((v[i]<v[i-1])&&(v[i]<v[i+1])){
				pair<int,char> p={i,'v'};
				v1.pb(p);
			}
		}
		int iv=v1.size();
		int hvh=0;
		int vhv=0
		for(int i=1;i<iv-1;i++){
			if((v1[i].first-v1[i-1].first==1)&&((v1[i+1].first-v1[i].first)==1)){
				if((v1[i-1].second=='h')&&(v1[i].second=='v')&&(v1[i+1].second=='h')){
					hvh++;
					break;
				}
				else if(((abs(v1[i].first-v1[i-1].first)==1)&&(abs(v1[i+1].first-v1[i].first)==1))){
					if((v1[i-1].second=='v')&&(v1[i].second=='h')&&(v1[i+1].second=='v')){
					hvh++;
					break;
				}
			}
		}
	}
	return 0;
}