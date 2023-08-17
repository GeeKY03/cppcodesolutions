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
	int n;
	cin>>n;
	vi v;
	for(int i=0;i<n;i++){
		ll sum=0;
		ll num;
		cin>>num;
		while(num!=0){
			sum+=num%10;
			num/=10;
		}
		v.pb(sum);
	}
	ll count=0;
	ll size=v.size();
	for(int i=0;i<size-1;i++){
		if(v[i]==0){
			continue;
		}
		else{
			for(int j=i+1;j<size;j++){
				if(v[j]==0){
					continue;
				}
				else{
					if((v[j]+v[i])%3==0){
						count++;
						v[j]=0;
						v[i]=0;
						break;
					}
				}
		    }
		}
	}
	cout<<count<<endl;

	return 0;
}