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
		vi v;
		int sum=0;
		int one=0;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if((i==0)||(i==(n-1))){
				continue;
			}
			else{
				sum+=num;
				v.pb(num);
				if(num==1){
					one++;
				}
			}
		}
		if(one>0){
			cout<<-1<<endl;
		}
		else{
			if(sum%2!=0){
				cout<<(sum+1)/2<<endl;
			}
			else{
				cout<<sum/2<<endl;
			}
		}
	}

	return 0;
}