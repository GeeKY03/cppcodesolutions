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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll odds=0;
		ll oddc=0;
		ll count=0;
		vi v;
		for(int i=0;i<n;i++){
			ll a=0;
			cin>>a;
			if(a&1){
				odds+=a;
				oddc++;
				if(i==n-1){
					if((odds>0)&&(oddc>1)){
						v.pb(odds);
						count++;
					}
					else if((odds>0)&&(oddc==1)){
						v.pb(odds);
					}
				}
			}
			else{
				if((odds>0)&&(oddc>1)){
					v.pb(odds);
					odds=0;
					oddc=0;
					count++;
					v.pb(a);
				}
				else if((odds>0)&&(oddc==1)){
					v.pb(odds);
					oddc=0;
					odds=0;
					v.pb(a);
				}
				else{
					v.pb(a);
				}
			}
			
		}
		vi vf;
		ll sum=0;
		for(int i=0;i<v.size();i++){
			if(v[i]&1){
				if(i==0){
					vf.pb(v[i]);
				}
				else if(i==1){
					if(sum>0){
						vf.pb(v[i]);
						sum=0;
					}
					else{
						vf.pb(v[i]);
					}
				}
				else{
					if((sum>0)&&(v[i-2]%2==0)){
						vf.pb(sum);
						sum=0;
						vf.pb(v[i]);
						count++;
					}
					else if((sum>0)&&(v[i-2]%2!=0)){
						vf.pb(sum);
						sum=0;
						vf.pb(v[i]);
					}
					else{
						vf.pb(v[i]);
					}
				}
			}
			else{
				sum+=v[i];
			}
			if((v[i]%2==0)&&(v[i-1]%2==0)&&(i==v.size()-1)){
				vf.pb(sum);
				count++;
				sum=0;
			}
			else if((v[i]%2==0)&&(v[i-1]%2!=0)&&(i==v.size()-1)){
				vf.pb(v[i]);
			} 
		}
		cout<<vf.size()<<" "<<count<<endl;
	}

	return 0;
}