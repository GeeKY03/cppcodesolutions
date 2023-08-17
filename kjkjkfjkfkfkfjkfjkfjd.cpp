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


	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi odd;
		vi even;
		ll one=0;
		ll sum=0;
		for(int i=0;i<n;i++){
			ll num;
			cin>>num;
			if((i==0)||(i==n-1)){
				continue;
			}
			else if(num==0){
				continue;
			}
			else if((num%2==0)&&(num>0)){
				if(num==2){
					even.pb(num);
				}
				else{
					sum+=(num-2);
					even.pb(2);
				}
			}
			else if(num%2!=0){
				if(num==1){
					odd.pb(num);
					one++;
				}
				else{
					sum+=(num-1);
					odd.pb(1);
				}
			}
		}
		if(one==n-2){
			cout<<-1<<endl;
		}
		else if((odd.size()==1)&&(even.size()==0)){
			cout<<-1<<endl;
		}
		else if((odd.size()==0)&&(even.size()==0)){
			cout<<-1<<endl;
		}
		else if(odd.size()==0){
			ll ope=(sum/2)+even.size();
			cout<<ope<<endl;
		}
		else if(even.size()==0){
			ll ope=(sum/2)+(odd.size());
			cout<<ope<<endl;
		}
		else{
			ll ope=(sum/2)+odd.size()+even.size();
			cout<<ope<<endl;
		}
	}

	return 0;
}