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
		int n,m;
		cin>>n>>m;
		vi v;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			v.pb(num);
		}
		sort(v.begin(),v.end());
		vi v2;
		for(int i=0;i<n;i++){
			int num1=v[n-1]+v[i]+(v[n-1]-v[i])%m;
			int num2=v[n-1]+v[i];
			if((v[i]-v[n-1])<0){
				num2+=((v[i]-v[n-1])%m)+m;
			}
			else{
				num2+=(v[i]-v[n-1])%m;
			}
			v2.pb(num1);
			v2.pb(num2);
		}
		sort(v2.rbegin(),v2.rend());
		cout<<v2[0]<<endl;



		// int num1=(2*v[0]);
		// v2.pb(num1);
		// for(int i=1;i<n;i++){
		// 	int num2=(2*v[i]);
		// 	int num3=(v[i]+v[i-1]+((v[i-1]-v[i])%m+m));
		// 	int num4=(v[i]+v[i-1]+(v[i]-v[i-1])%m);
		// 	v2.pb(num2);
		// 	v2.pb(num3);
		// 	v2.pb(num4);
		// }
		// sort(v2.rbegin(),v2.rend());
		// cout<<v[0]<<endl;




		// for(int i=0;i<n;i++){
		// 	for(int j=0;j<n;j++){
		// 		int num1=v[i]+v[j];
		// 		int num2=v[i]+v[j];
		// 		if((v[i]-v[j])<0){
		// 			num1+=((v[i]-v[j])%m+m);
		// 		}
		// 		else{
		// 			num1+=(v[i]-v[j])%m;
		// 		}
		// 		if((v[j]-v[i])<0){
		// 			num2+=(((v[j]-v[i])%m)+m);
		// 		}
		// 		else{
		// 			num2+=(v[j]-v[i])%m;
		// 		}
		// 		v2.pb(num1);
		// 		v2.pb(num2);
		// 	}
		// }
		// sort(v2.rbegin(),v2.rend());
		// cout<<v2[0]<<endl;
	}

	return 0;
}