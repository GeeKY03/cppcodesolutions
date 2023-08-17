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
		vi v;
		ll c=0;
		ll odds=0;
		ll counto=0;
		ll count=0;
		ll evens=0;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			if(a&1){
				// if(evens>0){
				// 	v.pb(evens);
				// 	evens=0;
				// }
				odds+=a;
				counto++;
			}
			else{
				if((odds>0)&&(counto>1)){
					v.pb(odds);
					count++;
					odds=0;
					counto=0;
				}
				else if(odds>0){
					v.pb(odds);
					odds=0;
					counto=0;
				}
				v.pb(a);
				counto=0;
			}
			if(i==n-2){
				c=a;
			}
			if(i==n-1){
				if((c&1)&&(a&1)){
					v.pb(odds);
					count++;
				}
				else if(a&1){
					v.pb(odds);
				}
			}
			// if(i==n-1){
			// 	if((odds>0)&&(lp=1)){
			// 		v.pb(odds);
			// 		count++;
			// 	}
			// 	else{
			// 		v.pb(a);
			// 	}
				
			// }
			c=a;
		}





		vi vf;
		ll sum=0;
		int len=v.size();
		for(int i=0;i<len;i++){
			if(v[i]&1){
				if(i==0){
					vf.pb(v[i]);
				}
				else if(i>0){
					if((sum>0)&&(v[i-2]%2==0)){
						vf.pb(sum);
						count++;
						sum=0;
						vf.pb(v[i]);
					}
					else{
						vf.pb(sum);
						sum=0;
						vf.pb(v[i]);
					}
				}
			}
			else{
				sum+=v[i];
			}
			if((v[i]%2==0)&&(v[i-1]%2==0)&&(i==len-1)){
				vf.pb(sum);
				count++;
				sum=0;
			}
			else if((v[i]%2==0)&&(v[i-1]%2!=0)&&(i==len-1)){
				vf.pb(v[i]);
			} 
		}






			// if(i==len-1){
			// 	if(v[i]&1){
			// 		continue;
			// 	}
			// 	else{
			// 		if((sum>0)&&(c%2==0)){
			// 		    vf.pb(sum);
			// 		    count++;
			// 		}
			// 		else{
			// 			v.pb(sum);
			// 		}
			// 	}
			// }

		// for(int i=0;i<v.size();i++){
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;

		// for(int i=0;i<vf.size();i++){
		// 	cout<<vf[i]<<" ";
		// }
		// cout<<endl;
		cout<<vf.size()<<" "<<count<<endl;

	}

	return 0;
}