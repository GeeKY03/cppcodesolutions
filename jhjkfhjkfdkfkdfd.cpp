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
		ll a;
		cin>>a;
		v.pb(a);
	}
	int si=0;
	int ei=0;
	int flag=0;
	for(int i=1;i<n;i++){
		if(v[i-1]>v[i]){
			si=i-1;
			break;
		}
	}
	for(int i=si+1;i<n;i++){
		if(v[i-1]<v[i]){
			ei=i-1;
			break;
		}

		else if(i==n-1){
			ei=n-1;
		}
	}
	reverse(v.begin()+si,v.begin()+ei+1);
	int count=0;
	for(int i=1;i<n;i++){
		if(v[i-1]>v[i]){
			count++;
			break;
		}
	}
	if(count==1){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
		cout<<si+1<<" "<<ei+1<<endl;
	}

	return 0;
}