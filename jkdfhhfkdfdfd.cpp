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
	vi theo,att;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		theo.pb(a);
	}
	ll sum=0;
	set<int> sett;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==1){
			sum+=theo[i];
		}
		ll count=0;
		if((i<n-k)&&(att[i]==0)){
			for(int j=i;j<k+i;j++){
				if(att[j]==0){
					count+=theo[j];
				}
			}
			sett.insert(count);
		}
	}
	cout<<sum<<endl;

	return 0;
}